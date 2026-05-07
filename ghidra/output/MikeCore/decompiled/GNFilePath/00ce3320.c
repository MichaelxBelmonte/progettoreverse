// Function: FUN_00ce3320
// Address: 00ce3320
// Size: 628 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce3473) */
/* WARNING: Removing unreachable block (ram,0x00ce34b0) */
/* WARNING: Removing unreachable block (ram,0x00ce34b5) */
/* WARNING: Removing unreachable block (ram,0x00ce34bd) */
/* WARNING: Removing unreachable block (ram,0x00ce3477) */
/* WARNING: Removing unreachable block (ram,0x00ce342a) */
/* WARNING: Removing unreachable block (ram,0x00ce3433) */
/* WARNING: Removing unreachable block (ram,0x00ce33ba) */
/* WARNING: Removing unreachable block (ram,0x00ce33c3) */
/* WARNING: Removing unreachable block (ram,0x00ce33f4) */
/* WARNING: Removing unreachable block (ram,0x00ce33fd) */
/* WARNING: Removing unreachable block (ram,0x00ce3494) */
/* WARNING: Removing unreachable block (ram,0x00ce3499) */

ulonglong FUN_00ce3320(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  
  cVar3 = (**(code **)(*unaff_RDI + 0x3a0))();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*unaff_RDI + 0x398))();
    if (cVar3 == '\0') {
      FUN_00d50b00();
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*DAT_02572370)();
      do {
        FUN_00d21140();
        (**(code **)(*unaff_RDI + 0x368))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d8ee20();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b00();
        }
        iVar4 = FUN_00d8c7a0();
        iVar5 = FUN_00d8c7a0();
        if (iVar4 == iVar5) {
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          uVar7 = 0;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00ce35a0;
          goto LAB_00ce359b;
        }
        FUN_00cddf30();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        cVar3 = (**(code **)(*unaff_RDI + 0x3a0))();
      } while (cVar3 == '\0');
      uVar7 = (ulonglong)*(uint *)((longlong)puVar6 + 0xc);
      do {
        iVar4 = (int)uVar7;
        uVar2 = uVar7 >> 8;
        if (iVar4 < 1) break;
        plVar1 = *(longlong **)(puVar6[2] + -8 + uVar7 * 8);
        if (unaff_RDI != plVar1) {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          unaff_RDI = plVar1;
        }
        cVar3 = (**(code **)(*unaff_RDI + 0x420))();
        uVar7 = uVar7 - 1;
      } while (cVar3 != '\0');
      uVar7 = CONCAT71((int7)uVar2,iVar4 < 1) & 0xffffffff;
      if (puVar6 != (undefined8 *)0x0) {
LAB_00ce359b:
        FUN_00d50b20();
      }
LAB_00ce35a0:
      FUN_00d50b20();
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7 & 0xffffffff;
}


