// Function: FUN_009e4146
// Address: 009e4146
// Size: 712 bytes
// Class: GNString


ulonglong FUN_009e4146(void)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong unaff_RDI;
  
  lVar11 = *(longlong *)(unaff_RDI + 0x58);
  iVar2 = *(int *)(lVar11 + 0x10);
  *(undefined1 *)(unaff_RDI + 0x78) = *(undefined1 *)(lVar11 + 0x14);
  uVar14 = (ulonglong)(iVar2 + 5U);
  if (iVar2 + 5U < 6) {
    uVar13 = (longlong)&switchD_009e4184::switchdataD_009e44f8 +
             (longlong)(int)(&switchD_009e4184::switchdataD_009e44f8)[uVar14];
    switch(uVar14) {
    case 0:
      puVar9 = (undefined8 *)FUN_009e2686();
      puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x28);
      if (puVar10 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x28);
      }
      *puVar10 = 1;
      puVar10[2] = 0;
      uVar12 = puVar9[1];
      *(undefined8 *)(puVar10 + 4) = *puVar9;
      *(undefined8 *)(puVar10 + 6) = uVar12;
      *(undefined1 *)(puVar10 + 8) = *(undefined1 *)(puVar9 + 2);
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar10;
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      uVar12 = *(undefined8 *)(unaff_RDI + 0x28);
      *(undefined8 *)(*plVar4 + 0x30) = uVar12;
      *(undefined8 *)(*plVar4 + 0x20) = uVar12;
      lVar11 = *plVar4;
      uVar14 = *(ulonglong *)(lVar11 + 0x18);
      *(bool *)(lVar11 + 0x28) = uVar14 != *(ulonglong *)(lVar11 + 0x20);
      goto LAB_009e435c;
    case 1:
      lVar11 = *(longlong *)(lVar11 + 8);
      piVar3 = *(int **)(lVar11 + 8);
      *(int **)(unaff_RDI + 0x58) = piVar3;
      if (*piVar3 == 0x1b) {
        cVar7 = FUN_009e58f2();
        uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
        if (cVar7 == '\0') {
          *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(lVar11 + 0x10);
        }
        goto LAB_009e436a;
      }
      iVar2 = piVar3[4];
      uVar12 = *(undefined8 *)(unaff_RDI + 0x28);
      uVar15 = *(undefined8 *)(*(longlong *)(piVar3 + 2) + 8);
      uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(piVar3 + 2) + 0x10) + 8);
      *(undefined8 *)(unaff_RDI + 0x58) = uVar15;
      bVar6 = FUN_009e3dba();
      *(undefined8 *)(unaff_RDI + 0x28) = uVar12;
      bVar6 = iVar2 == -2 ^ bVar6;
      uVar13 = CONCAT71((int7)((ulonglong)uVar15 >> 8),bVar6);
      if (bVar6 != 0) {
        *(undefined8 *)(unaff_RDI + 0x58) = uVar5;
        break;
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x10);
      goto LAB_009e4364;
    case 2:
      uVar1 = *(undefined1 *)(unaff_RDI + 0x7b);
      *(undefined1 *)(unaff_RDI + 0x7b) = 1;
      uVar12 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) + 8);
      *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(*(longlong *)(lVar11 + 8) + 8);
      uVar8 = FUN_009e3dba();
      uVar14 = (ulonglong)uVar8;
      if (((char)uVar8 == '\0') && (*(char *)(unaff_RDI + 0x7b) == '\0')) {
        do {
          *(undefined2 *)(unaff_RDI + 0xe4) = 0;
          *(undefined1 *)(unaff_RDI + 0xe6) = 0;
          do {
            cVar7 = (**(code **)(&DAT_02524630 + (ulonglong)**(uint **)(unaff_RDI + 0xd8) * 0x10))()
            ;
          } while (cVar7 != '\0');
          uVar14 = 0;
        } while (*(longlong *)(unaff_RDI + 0x58) != 0);
      }
      else {
        *(undefined8 *)(unaff_RDI + 0x58) = uVar12;
        *(undefined1 *)(unaff_RDI + 0x7b) = uVar1;
      }
      goto LAB_009e436a;
    default:
      uVar12 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) + 8);
      *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(*(longlong *)(lVar11 + 8) + 8);
      puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      if (puVar10 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x20);
      }
      uVar13 = *(ulonglong *)(unaff_RDI + 0x28);
      *puVar10 = 3;
      *(undefined8 *)(puVar10 + 2) = uVar12;
      *(ulonglong *)(puVar10 + 4) = uVar13;
      *(bool *)(puVar10 + 6) = iVar2 == -1;
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar10;
      break;
    case 5:
      goto switchD_009e4184_caseD_5;
    }
  }
  else {
    if ((*(byte *)(unaff_RDI + 0x62) & 4) == 0) {
      puVar9 = (undefined8 *)FUN_009e2686();
      puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x28);
      if (puVar10 < *(undefined4 **)(unaff_RDI + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (undefined4 *)(*(longlong *)(unaff_RDI + 0xd8) + -0x28);
      }
      *puVar10 = 1;
      puVar10[2] = iVar2;
      uVar12 = puVar9[1];
      *(undefined8 *)(puVar10 + 4) = *puVar9;
      *(undefined8 *)(puVar10 + 6) = uVar12;
      *(undefined1 *)(puVar10 + 8) = *(undefined1 *)(puVar9 + 2);
      *(undefined4 **)(unaff_RDI + 0xd8) = puVar10;
      uVar14 = *(ulonglong *)(unaff_RDI + 0x28);
      *(ulonglong *)(**(longlong **)(unaff_RDI + 0x10) + 0x30 + (longlong)iVar2 * 0x18) = uVar14;
    }
LAB_009e435c:
    lVar11 = *(longlong *)(unaff_RDI + 0x58);
    uVar13 = uVar14;
switchD_009e4184_caseD_5:
    uVar12 = *(undefined8 *)(lVar11 + 8);
LAB_009e4364:
    *(undefined8 *)(unaff_RDI + 0x58) = uVar12;
  }
  uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
LAB_009e436a:
  return uVar14 & 0xffffffff;
}


