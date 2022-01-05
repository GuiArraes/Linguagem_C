#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//14) AREA = (BASE x ALTURA) / 2. Área de um Triângulo
//15) CAC = 3.1416 * R². Lembre-se que R² é o mesmo que (R * R). Área de um Círculo
//16) CPC = 3.1416 * D, sendo que D = R + R. Perímetro de Círculo
//17) CVC = (3.1416 * R²) * H Volume de Cilindro
//18) VCN = ((3.1416 * R²) / 3) * H Volume de um Cone
//19) VPD = (L * L) * (H / 3) Volume de Pirâmide
//20) VPM = L1 * L2 * L3 Volume de Prisma
//21) VEF = (4/3) * 3.1416) * R³ Volume de Esfera.
float AREA, CAC, CPC, CVC, VCN, VPD, VPM, VEF;
float BASE, ALTURA;
float R, H, L, L1, L2, L3;

int main (){
setlocale(LC_ALL,"portuguese");

    printf ("Base do triangulo: ");
    scanf ("%f",&BASE);
    printf ("Altura do triangulo: ");
    scanf ("%f",&ALTURA);
    printf ("Raio (Círculo, Cilindo e Esfera): ");
    scanf ("%f",&R);
    printf ("Altura (Cone, Cilindro e Pirâmide): ");
    scanf ("%f",&H);
    printf ("Lado da Pirâmide (L): ");
    scanf ("%f",&L);
    printf ("Prisma (L1): ");
    scanf ("%f",&L1);
    printf ("Prisma (L2): ");
    scanf ("%f",&L2);
    printf ("Prisma (L3): ");
    scanf ("%f",&L3);   
    
    AREA = (BASE * ALTURA)/2.0;       // Área de um Triângulo
    CAC = 3.1416*R*R;                 // Área de um Círculo 
    CPC = 3.1416*(R+R);               // Perímetro de Círculo
    CVC =(3.1416*R*R)*H;              // Volume de Cilindro
    VCN =((3.1416 * R*R)/3.0)*H;      // Volume de um Cone
    VPD = (L*L)*(H/3.0);              // Volume de Pirâmide
    VPM = L1*L2*L3;                   // Volume de Prisma
    VEF = ((4.0/3.0)*3.1416)*R*R*R;   // Volume de Esfera              

    printf ("========================================================= \n");
    printf ("Área do Triângulo (B=%.2f h=%.2f): %.2f \n",BASE, ALTURA, AREA);
    printf ("========================================================= \n");
    printf ("Área do Círculo (R=%.2f): %.2f \n",R, CAC);
    printf ("========================================================= \n");
    printf ("Perímetro do Círculo (D=%.2f):%.2f \n",2*R, CPC);
    printf ("========================================================= \n");
    printf ("Volume do Cilindro (R=%.2f H=%.2f):%.2f \n",R, H,CVC);
    printf ("========================================================= \n");
    printf ("Volume do Cone (R=%.2f Hc=%.2f): %.2f \n",R, H, VCN);
    printf ("========================================================= \n");
    printf ("Volume da Pirâmide (L=%.2f Hp=%.2f):%.2f \n",L, H, VPD);
    printf ("========================================================= \n");
    printf ("Volume do Priema (L1=%.2f L2=%.2f L3=%.2f): %.2f \n", L1, L2, L3, VPM);
    printf ("========================================================= \n");
    printf ("Volume da Esfera (R=%.2f): %.2f \n",R, VEF);
    printf ("========================================================= \n");

system ("pause");
return 0;
}
