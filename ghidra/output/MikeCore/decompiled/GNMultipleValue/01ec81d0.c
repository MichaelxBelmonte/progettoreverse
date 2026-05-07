// Function: FUN_01ec81d0
// Address: 01ec81d0
// Size: 1517 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ec8485) */
/* WARNING: Removing unreachable block (ram,0x01ec8492) */
/* WARNING: Removing unreachable block (ram,0x01ec838d) */
/* WARNING: Removing unreachable block (ram,0x01ec8399) */
/* WARNING: Removing unreachable block (ram,0x01ec86c9) */
/* WARNING: Removing unreachable block (ram,0x01ec853d) */
/* WARNING: Removing unreachable block (ram,0x01ec864d) */
/* WARNING: Removing unreachable block (ram,0x01ec8560) */
/* WARNING: Removing unreachable block (ram,0x01ec84b7) */
/* WARNING: Removing unreachable block (ram,0x01ec84c4) */
/* WARNING: Removing unreachable block (ram,0x01ec8512) */
/* WARNING: Removing unreachable block (ram,0x01ec8652) */
/* WARNING: Removing unreachable block (ram,0x01ec865a) */
/* WARNING: Removing unreachable block (ram,0x01ec8662) */
/* WARNING: Removing unreachable block (ram,0x01ec866e) */
/* WARNING: Removing unreachable block (ram,0x01ec8676) */
/* WARNING: Removing unreachable block (ram,0x01ec86b5) */
/* WARNING: Removing unreachable block (ram,0x01ec86ba) */
/* WARNING: Removing unreachable block (ram,0x01ec86ce) */
/* WARNING: Removing unreachable block (ram,0x01ec86d8) */
/* WARNING: Removing unreachable block (ram,0x01ec86e5) */
/* WARNING: Removing unreachable block (ram,0x01ec876b) */
/* WARNING: Removing unreachable block (ram,0x01ec8234) */
/* WARNING: Removing unreachable block (ram,0x01ec86f4) */
/* WARNING: Removing unreachable block (ram,0x01ec877f) */

ulonglong FUN_01ec81d0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_118;
  char local_110;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if (local_40 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    if (local_38 != '\0') {
      plVar8 = (longlong *)0x0;
    }
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_01cae990();
    lVar6 = DAT_027fe668;
    if (DAT_027fe668 != 0) {
      FUN_00d50b00();
    }
    uVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      if (param_2 != '\0') {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        FUN_01d88f70();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_01e42030();
          FUN_01d8c820();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = DAT_027edfd0;
        if (DAT_027edfd0 != 0) {
          FUN_00d50b00();
        }
        FUN_01ccaae0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar6 = DAT_027edfe0;
        if (local_40 == (longlong *)0x0) {
          if (DAT_027edfe0 != 0) {
            FUN_00d50b00();
          }
          FUN_01ccaae0();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_01d70da0();
          FUN_00d46530();
          lVar6 = DAT_027e7c20;
          if (DAT_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*unaff_RDI + 0x4d0))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          iVar4 = FUN_01d70da0();
          if ((iVar4 == -1) ||
             (((cVar2 = (**(code **)(*unaff_RDI + 0x508))(), cVar2 != '\0' &&
               (bVar9 = iVar4 == 0, iVar4 = iVar4 + -1, bVar9)) ||
              (lVar6 = *(longlong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (longlong)iVar4 * 8),
              lVar6 == 0)))) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
          }
          lVar1 = DAT_027e7c20;
          if (DAT_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*unaff_RDI + 0x4d0))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ec8791;
    }
  }
  uVar5 = FUN_01d827c0();
  uVar7 = (ulonglong)uVar5;
LAB_01ec8791:
  if ((local_40 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar7;
}


