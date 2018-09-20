

#include<stdlib.h>

#include<stdio.h>

#include<GL/glut.h>

#include<string.h>

#include<time.h>

#include<math.h>



//Basic Initializations

typedef float point2[3];

int n=3,a,b,value=rand()%6,count=1,count1=1,arraydice[]={1,2,3,4,5,6},flag=1,c=1;

point2 v[]={{1.0,1.0},{490.0,1.0},{490.0,430.0},{1.0,430.0}};



//Function to a rectangle

void rectangle(point2 a,point2 b,point2 c,point2 d)

{

	glBegin(GL_LINE_LOOP);

	glColor3f(1.0,0.0,.0);

	glVertex2fv(a);

    glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();

}



//Function to display any content on the screen

void output(float x,float y,char* string)

{

	int len,i;

	glRasterPos2f(x,y);

	len=(int)strlen(string);

	for(i=0;i<len;i++)

	{

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);

	}

}



//Function to draw the board by subdividing the rectangle

void divide_rectangle(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d,int m)

{

	 point2 v0,v1,v2,v3,v4;

	 int j;

	 if(m>0)

	 {

		for(j=0;j<2;j++) v0[j]=(a[j]+b[j])/2;

		for(j=0;j<2;j++) v1[j]=(b[j]+c[j])/2;

		for(j=0;j<2;j++) v2[j]=(c[j]+d[j])/2;

		for(j=0;j<2;j++) v3[j]=(d[j]+a[j])/2;

		for(j=0;j<2;j++) v4[j]=(v0[j]+v2[j])/2;

		divide_rectangle(a,v0,v4,v3,m-1);

		divide_rectangle(b,v0,v4,v1,m-1);

		divide_rectangle(c,v1,v4,v2,m-1);

		  divide_rectangle(d,v2,v4,v3,m-1);

	 }

	 else rectangle(a,b,c,d);

}



////Function to display using output function

void text()

{

	glLineWidth(5.0);

	output(15,6,"START");

	output(95,6,"2");

	output(165,6,"3");

	output(220,6,"4");

	output(290,6,"5");

	output(350,6,"6");

	output(410,6,"7");

	output(475,6,"8");

	output(25,66,"16");

	output(95,66,"15");

	output(165,66,"14");

	output(220,66,"13");

	output(290,66,"12");

	output(350,66,"11");

	output(410,66,"10");

	output(475,66,"9");

	output(25,126,"17");

	output(95,126,"18");

	output(165,126,"19");

	output(220,126,"20");

	output(290,126,"21");

	output(350,126,"22");

	output(410,126,"23");

	output(475,126,"24");

	output(25,186,"32");

	output(95,186,"31");

	output(165,186,"30");

	output(220,186,"29");

	output(290,186,"28");

	output(350,186,"27");

	output(410,186,"26");

	output(475,186,"25");

	output(25,246,"33");

	output(95,246,"34");

	output(165,246,"35");

	output(220,246,"36");

	output(290,246,"37");

	output(350,246,"38");

	output(410,246,"39");

	output(475,246,"40");

	output(25,306,"48");

	output(95,306,"47");

	output(165,306,"46");

	output(220,306,"45");

	output(290,306,"44");

	output(350,306,"43");

	output(410,306,"42");

	output(475,306,"41");

	output(25,356,"49");

	output(95,356,"50");

	output(165,356,"51");

	output(220,356,"52");

	output(290,356,"53");

	output(350,356,"54");

	output(410,356,"55");

	output(475,356,"56");

	output(15,406,"FINISH");

	output(95,406,"63");

	output(165,406,"62");

	output(220,406,"61");

	output(290,406,"60");

	output(350,406,"59");

	output(410,406,"58");

	output(475,406,"57");

	output(20,570,"ARROW AND LADDER GAME");

}





void playerpoint()

{

	glColor3f(0.0,0.0,1.0);

	glPointSize(20.0);

	switch(count)

	{

		//1st row

	case 1:glBegin(GL_POINTS);

	glVertex2i(10.0,20.0);

	glEnd(); break;

	case 2:glBegin(GL_POINTS);

	glVertex2i(80.0,20.0);

	glEnd(); break;

	case 3:glBegin(GL_POINTS);

	glVertex2i(145.0,20.0);

	glEnd(); break;

	case 4:glBegin(GL_POINTS);

	glVertex2i(200.0,20.0);

	glEnd();break;

	case 5:glBegin(GL_POINTS);

	glVertex2i(270.0,20.0);

	glEnd();break;



	case 7:glBegin(GL_POINTS);

	glVertex2i(390.0,20.0);

	glEnd();break;

	case 8:glBegin(GL_POINTS);

	glVertex2i(455.0,20.0);

	glEnd();break;

	//2nd row

	case 16:glBegin(GL_POINTS);

	glVertex2i(10.0,80.0);

	glEnd();break;

	case 15:glBegin(GL_POINTS);

	glVertex2i(80.0,80.0);

	glEnd();break;

	case 14:glBegin(GL_POINTS);

	glVertex2i(145.0,80.0);

		glEnd();break;

	case 13:glBegin(GL_POINTS);

	glVertex2i(200.0,80.0);

	glEnd();break;

	case 12:glBegin(GL_POINTS);

	glVertex2i(270.0,80.0);

	glEnd();break;

	case 11:glBegin(GL_POINTS);

	glVertex2i(330.0,80.0);

	glEnd();break;

	case 10:glBegin(GL_POINTS);

	glVertex2i(390.0,80.0);

	glEnd();break;

	case 9:glBegin(GL_POINTS);

	glVertex2i(455.0,80.0);

	glEnd();break;



//3rd row

	case 17:glBegin(GL_POINTS);

	glVertex2i(10.0,140.0);

	glEnd();break;

	case 18:glBegin(GL_POINTS);

	glVertex2i(80.0,140.0);

	glEnd();break;

	case 19:glBegin(GL_POINTS);

	glVertex2i(145.0,140.0);

	glEnd();break;

	case 21:glBegin(GL_POINTS);

	glVertex2i(270.0,140.0);

	glEnd();break;

	case 22:glBegin(GL_POINTS);

	glVertex2i(330.0,140.0);

	glEnd();break;

	case 23:glBegin(GL_POINTS);

	glVertex2i(390.0,140.0);

	glEnd();break;

	case 24:glBegin(GL_POINTS);

	glVertex2i(455.0,140.0);

	glEnd();break;



	//4th row

	case 32:glBegin(GL_POINTS);

	glVertex2i(10.0,200.0);

	glEnd();break;

	case 31:glBegin(GL_POINTS);

	glVertex2i(80.0,200.0);

	glEnd();break;

	case 30:glBegin(GL_POINTS);

	glVertex2i(145.0,200.0);

	glEnd();break;

	case 29:glBegin(GL_POINTS);

	glVertex2i(200.0,200.0);

	glEnd();break;

	case 28:glBegin(GL_POINTS);

	glVertex2i(270.0,200.0);

	glEnd();break;

	case 27:glBegin(GL_POINTS);

	glVertex2i(330.0,200.0);

	glEnd();break;

	case 26:glBegin(GL_POINTS);

	glVertex2i(390.0,200.0);

	glEnd();break;

	case 25:glBegin(GL_POINTS);

	glVertex2i(455.0,200.0);

	glEnd();break;



	//5th row

	case 33:glBegin(GL_POINTS);

	glVertex2i(10.0,250.0);

	glEnd();break;

	case 34:glBegin(GL_POINTS);

	glVertex2i(80.0,250.0);

	glEnd();break;

	case 35:glBegin(GL_POINTS);

	glVertex2i(145.0,250.0);

	glEnd();break;

	case 36:glBegin(GL_POINTS);

	glVertex2i(180.0,250.0);

	glEnd();break;

	case 37:glBegin(GL_POINTS);

	glVertex2i(270.0,250.0);

	glEnd();break;

	case 38:glBegin(GL_POINTS);

	glVertex2i(330.0,250.0);

	glEnd();break;



	//6th row

	case 47:glBegin(GL_POINTS);

	glVertex2i(80.0,300.0);

	glEnd();break;

	case 46:glBegin(GL_POINTS);

	glVertex2i(145.0,300.0);

	glEnd();break;

	case 45:glBegin(GL_POINTS);

	glVertex2i(200.0,300.0);

	glEnd();break;

	case 44:glBegin(GL_POINTS);

	glVertex2i(270.0,300.0);

	glEnd();break;

	case 43:glBegin(GL_POINTS);

	glVertex2i(330.0,300.0);

	glEnd();break;

	case 42:glBegin(GL_POINTS);

	glVertex2i(390.0,300.0);

	glEnd();break;

	case 41:glBegin(GL_POINTS);

	glVertex2i(455.0,300.0);

	glEnd();break;



	//7th row

	case 49:glBegin(GL_POINTS);

	glVertex2i(10.0,360.0);

		glEnd();break;

	case 50:glBegin(GL_POINTS);

	glVertex2i(80.0,360.0);

	glEnd();break;

	case 51:glBegin(GL_POINTS);

	glVertex2i(145.0,360.0);

	glEnd();break;

	case 52:glBegin(GL_POINTS);

	glVertex2i(200.0,360.0);

	glEnd();break;

	case 54:glBegin(GL_POINTS);

	glVertex2i(330.0,360.0);

	glEnd();break;

	case 55:glBegin(GL_POINTS);

	glVertex2i(390.0,360.0);

	glEnd();break;

	case 56:glBegin(GL_POINTS);

	glVertex2i(455.0,360.0);

	glEnd();break;



	//last row

	case 63:glBegin(GL_POINTS);

	glVertex2i(80.0,400.0);

	glEnd();break;

	case 61:glBegin(GL_POINTS);

	glVertex2i(200.0,400.0);

	glEnd();break;

	case 60:glBegin(GL_POINTS);

	glVertex2i(270.0,400.0);

	glEnd();break;

	case 59:glBegin(GL_POINTS);

	glVertex2i(330.0,400.0);

	glEnd();break;

	case 58:glBegin(GL_POINTS);

	glVertex2i(390.0,400.0);

	glEnd();break;

	case 57:glBegin(GL_POINTS);

	glVertex2i(455.0,360.0);

	glEnd();break;

	case 64:output(15,450,"Congrats!!!(blue)You Won..play new game or exit");

	output(20,500,"SELECT NEW GAME TO CONTINUE");count=1;break;

	}

}







void playerpoint2()

{

	glColor3f(1.0,0.0,0.0);

	glPointSize(20.0);



	switch(count1)

	{



	//1st row

		case 1:glBegin(GL_POINTS);

		glVertex2i(30.0,20.0);

		glEnd();break;

		case 2:glBegin(GL_POINTS);

		glVertex2i(100.0,20.0);

		glEnd();break;

		case 3:glBegin(GL_POINTS);

		glVertex2i(165.0,20.0);

		glEnd();break;

		case 4:glBegin(GL_POINTS);

		glVertex2i(220.0,20.0);

		glEnd();break;

		case 5:glBegin(GL_POINTS);

		glVertex2i(290.0,20.0);

		glEnd();break;



		case 7:glBegin(GL_POINTS);

		glVertex2i(410.0,20.0);

		glEnd();break;

		case 8:glBegin(GL_POINTS);

		glVertex2i(475.0,20.0);

		glEnd();break;



		//2nd row

		case 16:glBegin(GL_POINTS);

		glVertex2i(30.0,80.0);

		glEnd();break;

		case 15:glBegin(GL_POINTS);

		glVertex2i(100.0,80.0);

		glEnd();break;

		case 14:glBegin(GL_POINTS);

		glVertex2i(165.0,80.0);

		glEnd();break;

		case 13:glBegin(GL_POINTS);

		glVertex2i(220.0,80.0);

		glEnd();break;

		case 12:glBegin(GL_POINTS);

		glVertex2i(290.0,80.0);

		glEnd();break;

		case 11:glBegin(GL_POINTS);

		glVertex2i(350.0,80.0);

		glEnd();break;

		case 10:glBegin(GL_POINTS);

		glVertex2i(410.0,80.0);

		glEnd();break;

		case 9:glBegin(GL_POINTS);

		glVertex2i(475.0,80.0);

		glEnd();break;



		//3rd row

		case 17:glBegin(GL_POINTS);

		glVertex2i(30.0,140.0);

		glEnd();break;

		case 18:glBegin(GL_POINTS);

		glVertex2i(100.0,140.0);

		glEnd();break;

		case 19:glBegin(GL_POINTS);

		glVertex2i(165.0,140.0);

		glEnd();break;

		case 21:glBegin(GL_POINTS);

		glVertex2i(290.0,140.0);

		glEnd();break;

		case 22:glBegin(GL_POINTS);

		glVertex2i(350.0,140.0);

		glEnd();break;

		case 23:glBegin(GL_POINTS);

		glVertex2i(410.0,140.0);

		glEnd();break;

		case 24:glBegin(GL_POINTS);

		glVertex2i(475.0,140.0);

		glEnd();break;



		//4th row

		case 32:glBegin(GL_POINTS);

		glVertex2i(30.0,200.0);

		glEnd();break;

		case 31:glBegin(GL_POINTS);

		glVertex2i(100.0,200.0);

		glEnd();break;

		case 30:glBegin(GL_POINTS);

		glVertex2i(165.0,200.0);

		glEnd();break;

		case 29:glBegin(GL_POINTS);

		glVertex2i(220.0,200.0);

		glEnd();break;

		case 28:glBegin(GL_POINTS);

		glVertex2i(290.0,200.0);

		glEnd();break;

		case 27:glBegin(GL_POINTS);

		glVertex2i(350.0,200.0);

		glEnd();break;

		case 26:glBegin(GL_POINTS);

		glVertex2i(410.0,200.0);

		glEnd();break;

		case 25:glBegin(GL_POINTS);

		glVertex2i(475.0,200.0);

		glEnd();break;



		//5th row

		case 33:glBegin(GL_POINTS);

		glVertex2i(30.0,250.0);

		glEnd();break;

		case 34:glBegin(GL_POINTS);

		glVertex2i(100.0,250.0);

		glEnd();break;

		case 35:glBegin(GL_POINTS);

		glVertex2i(165.0,250.0);

		glEnd();break;

		case 36:glBegin(GL_POINTS);

		glVertex2i(220.0,250.0);

		glEnd();break;

		case 37:glBegin(GL_POINTS);

		glVertex2i(290.0,250.0);

		glEnd();break;

		case 38:glBegin(GL_POINTS);

		glVertex2i(350.0,250.0);

		glEnd();break;



		//6th row

		case 47:glBegin(GL_POINTS);

		glVertex2i(100.0,300.0);

		glEnd();break;

		case 46:glBegin(GL_POINTS);

		glVertex2i(165.0,300.0);

		glEnd();break;

		case 45:glBegin(GL_POINTS);

		glVertex2i(220.0,300.0);

		glEnd();break;

		case 44:glBegin(GL_POINTS);

		glVertex2i(290.0,300.0);

		glEnd();break;

		case 43:glBegin(GL_POINTS);

		glVertex2i(350.0,300.0);

		glEnd();break;

		case 42:glBegin(GL_POINTS);

		glVertex2i(410.0,300.0);

		glEnd();break;

		case 41:glBegin(GL_POINTS);

		glVertex2i(475.0,300.0);

		glEnd();break;



		//7th row

		case 49:glBegin(GL_POINTS);

		glVertex2i(30.0,360.0);

		glEnd();break;

		case 50:glBegin(GL_POINTS);

		glVertex2i(100.0,360.0);

		glEnd();break;

		case 51:glBegin(GL_POINTS);

		glVertex2i(165.0,360.0);

		glEnd();break;

		case 52:glBegin(GL_POINTS);

		glVertex2i(220.0,360.0);

		glEnd();break;

		case 54:glBegin(GL_POINTS);

		glVertex2i(350.0,360.0);

		glEnd();break;

		case 55:glBegin(GL_POINTS);

		glVertex2i(410.0,360.0);

		glEnd();break;

		case 56:glBegin(GL_POINTS);

		glVertex2i(475.0,360.0);

		glEnd();break;



		//last row

		case 63:glBegin(GL_POINTS);

		glVertex2i(100.0,400.0);

		glEnd();

		break;

		case 61:glBegin(GL_POINTS);

		glVertex2i(220.0,400.0);

		glEnd();break;

		case 60:glBegin(GL_POINTS);

		glVertex2i(290.0,400.0);

		glEnd();break;

		case 59:glBegin(GL_POINTS);

		glVertex2i(350.0,400.0);

		glEnd();break;

		case 58:glBegin(GL_POINTS);

		glVertex2i(410.0,400.0);

		glEnd();break;

		case 57:glBegin(GL_POINTS);

		glVertex2i(475.0,360.0);

		glEnd();break;

		case 64:output(15,450,"Congrats!!!(red)You Won..play new game or exit");

		output(20,500,"SELECT NEW GAME TO CONTINUE");count1=1;break;

	}

}



void ladder()

{

	//ladder1

	double x=340,y=10,x1=270,y1=250;

	double m=360,n=20,m1=290,n1=260;

	glLineWidth(5.0);

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();

	glBegin(GL_LINES);

	glVertex2d(m,n);

	glVertex2d(m1,n1);

	glEnd();



	x=305;y=130;x1=325;y1=140;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();



	x=287.5;y=190;x1=307.5;y1=200;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();



	x=322.5;y=70;x1=342.5;y1=80;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();





	//ladder2

	x=200;y=150;x1=200;y1=400;

	m=220;n=150;m1=220;n1=400;



	    glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();

	glBegin(GL_LINES);

	glVertex2d(m,n);

	glVertex2d(m1,n1);

	glEnd();



	x=200;y=275;x1=220;y1=275;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	x=200;y=337.5;x1=220;y1=337.5;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	x=200;y=212.5;x1=220;y1=212.5;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	//ladder3

	x=450;y=250;x1=450;y1=350;

	m=470;n=250;m1=470;n1=350;

	//glLineWidth(5.0);

    glBegin(GL_LINES);



	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();

	glBegin(GL_LINES);



	glVertex2d(m,n);

	glVertex2d(m1,n1);

	glEnd();



    x=450;y=300;x1=470;y1=300;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();



	x=450;y=325;x1=470;y1=325;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	x=450;y=275;x1=470;y1=275;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	//ladder4

    x=30;y=300;x1=70;y1=400;

	m=50;n=290;m1=90;n1=390;

	//glLineWidth(5.0);

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();

	glBegin(GL_LINES);

	glVertex2d(m,n);

	glVertex2d(m1,n1);

	glEnd();



    x=40;y=325;x1=60;y1=315;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

	glEnd();



	x=50;y=350;x1=70;y1=340;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();



	x=60;y=375;x1=80;y1=365;

	glBegin(GL_LINES);

	glVertex2d(x,y);

	glVertex2d(x1,y1);

    glEnd();

}





//points for dice

point2 d1[]={{550.0,10.0},{580.0,10.0},{580.0,50.0},{550.0,50.0}};

point2 d2[]={{550.0,60.0},{580.0,60.0},{580.0,100.0},{550.0,100.0}};

point2 d3[]={{550.0,110.0},{580.0,110.0},{580.0,150.0},{550.0,150.0}};

point2 d4[]={{550.0,160.0},{580.0,160.0},{580.0,200.0},{550.0,200.0}};

point2 d5[]={{550.0,210.0},{580.0,210.0},{580.0,250.0},{550.0,250.0}};

point2 d6[]={{550.0,260.0},{580.0,260.0},{580.0,300.0},{550.0,300.0}};



//dice 1

void dice1(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

    glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();

    float x=565.0,y=30.0;

	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(x,y);

	glEnd();



}



//dice 2

void dice2(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

    glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();



	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(560.0,70.0);

	glVertex2i(570.0,90.0);

	glEnd();

}



//dice 3

void dice3(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

    glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();

	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(555.0,120.0);

	glVertex2i(565.0,130.0);

	glVertex2i(575.0,140.0);

	glEnd();

}



//dice 4

void dice4(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

	glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();

	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(560.0,173.0);

	glVertex2i(560.0,186.0);

	glVertex2i(570.0,173.0);

	glVertex2i(570.0,186.0);

	glEnd();

}



//dice 5

void dice5(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

    glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();



	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(558.0,220.0);

	glVertex2i(572.0,220.0);

	glVertex2i(572.0,240.0);

	glVertex2i(558.0,240.0);

	glVertex2i(565.0,230.0);

	glEnd();



}



//dice 6

void dice6(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)

{

	glBegin(GL_POLYGON);

	glVertex2fv(a);

	glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glEnd();



	glColor3f(1.0,1.0,1.0);

	glPointSize(5.0);

	glBegin(GL_POINTS);

	glVertex2i(560.0,270.0);

	glVertex2i(560.0,280.0);

	glVertex2i(560.0,290.0);

	glVertex2i(570.0,270.0);

	glVertex2i(570.0,280.0);

	glVertex2i(570.0,290.0);

	glEnd();



}





//Arrows

//points for arrow1

point2 s1[]={{40.0,145.0},{138.0,385.0},{130.0,390.0},{150.0,410.0},{153.0,380.0},{145.0,383.0}};

//points for arrow2

point2 s2[]={{154.0,43.0},{383.0,235.0},{375.0,240.0},{400.0,245.0},{400.0,225.0},{390.0,227.0}};

//points for arrow3

point2 s3[]={{290.0,350.0},{453.0,220.0},{455.0,230.0},{463.0,205.0},{440.0,210.0},{445.0,215.0}};

//code for arrow

void arrow(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d,GLfloat *e,GLfloat *f)

{



	glBegin(GL_LINE_LOOP);

	glLineWidth(1.0);

	glVertex2fv(a);

	glVertex2fv(b);

	glVertex2fv(c);

	glVertex2fv(d);

	glVertex2fv(e);

	glVertex2fv(f);

	glEnd();



	glColor3f(0.0,1.0,0.0);

	glBegin(GL_POINTS);

	glVertex2i(140.0,393.0);

	glVertex2i(148.0,388.0);

	glEnd();



	glColor3f(0.0,1.0,0.0);

	glBegin(GL_POINTS);

	glVertex2i(385.0,238.0);

	glVertex2i(395.0,233.0);

	glEnd();



	glColor3f(0.0,1.0,0.0);

	glBegin(GL_POINTS);

	glVertex2i(450.0,215.0);

	glVertex2i(448.0,208.0);

	glEnd();



}



void dice(int id)

{

	switch(id)

	{

		case 1:	glColor3f(0.0,0.0,1.0);

			dice1(d1[0],d1[1],d1[2],d1[3]);

			break;

		case 2: glColor3f(0.0,0.0,1.0);

				dice2(d2[0],d2[1],d2[2],d2[3]);

				break;

		case 3: glColor3f(0.0,0.0,1.0);

				dice3(d3[0],d3[1],d3[2],d3[3]);

				break;

		case 4: glColor3f(0.0,0.0,1.0);

				dice4(d4[0],d4[1],d4[2],d4[3]);

				break;

		case 5: glColor3f(0.0,0.0,1.0);

				dice5(d5[0],d5[1],d5[2],d5[3]);

				break;

		case 6: glColor3f(0.0,0.0,1.0);

				dice6(d6[0],d6[1],d6[2],d6[3]);

				break;

	}

}

void display()

{

	glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0,0.0);

	divide_rectangle(v[0],v[1],v[2],v[3],n);

    glColor3f(1.0,0.0,0.0);

    text();

	glColor3f(1.0,1.0,1.0);

	ladder();

	glColor3f(0.0,0.0,1.0);

	dice(value);

	glColor3f(0.0,1.0,0.0);

	arrow(s1[5],s1[4],s1[3],s1[2],s1[1],s1[0]);

	glColor3f(0.0,1.0,0.0);

	arrow(s2[5],s2[4],s2[3],s2[2],s2[1],s2[0]);

	glColor3f(0.0,1.0,0.0);

	arrow(s3[0],s3[1],s3[2],s3[3],s3[4],s3[5]);

	glColor3f(0.0,0.0,0.0);

	playerpoint();

	playerpoint2();

	if(flag==1)

	{

		glColor3f(0.0,0.0,1.0);

		output(20,530,"PLAYER BLUE :PRESS B or b TO ROLL");

		playerpoint();

		flag--;



	}

	else if(flag==0)

	{



		glColor3f(1.0,0.0,0.0);

		output(20,530,"PLAYER RED :PRESS R or r TO ROLL");

		playerpoint2();

		flag=1;

		glFlush();

	}

	glFlush();

}

void Game(int id)

{

	switch(id)

	{

		case 1: display();

				count=1;

				count1=1;

				break;

		case 2: exit(0);

				break;

	}

}



void myMouse(int button,int state,int x,int y)

{

	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)

	{

		Game(y);

	}

	if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)

		Game(y);

    glutPostRedisplay();

}

void myKey(unsigned char key,int x,int y)

{



	a=rand()%6;

	b=rand()%6;

	if(key=='B' || key=='b')

	{

		value=a+b;

		a=b;

		b=value;

		while(value>6)

		{

			value%=6;

		}

		count=count+value;

		//ladder ascendent

		if(count==6) count=37;

		if(count==20) count=61;

		if(count==40) count=56;

		if(count==48) count=63;

		//snake descendent

		if(count==39) count=3;

		if(count==53) count=25;

		if(count==62) count=17;

		if(count>64) count-=value;

		dice(arraydice[value]);

	}

	else if(key=='r'|| key=='R')

	{

		value=a+b;

		a=b;

		b=value;

		while(value>6)

		{

			value%=6;

		}

		count1=count1+value;

		if(count1==6) count1=37;

		if(count1==20) count1=61;

		if(count1==40) count1=56;

		if(count1==48) count1=63;

		//snake descendent

		if(count1==39) count1=3;

		if(count1==53) count1=25;

		if(count1==62) count1=17;

		if(count1>64) count1-=value;

		dice(arraydice[value]);

	}

	glutPostRedisplay();

}



void myinit()

{

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glPointSize(5.0);

	gluOrtho2D(0.0,600.0,0.0,600.0);

	glClearColor(0.0,0.0,0.0,1.0);

	glColor3f(1.0,1.0,1.0);

}



int main(int argc,char** argv)

{

	value+=1;

	glutInitWindowSize(1015,705);

	glutInit(&argc,argv);

	glutCreateWindow(" And Ladder");

	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutCreateMenu(Game);

	glutAddMenuEntry("New Game",1);

	glutAddMenuEntry("Exit",2);

	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutMouseFunc(myMouse);

	glutKeyboardFunc(myKey);

	glutInitWindowPosition(0,0);

	glutDisplayFunc(display);

	myinit();

	glutMainLoop();

}
