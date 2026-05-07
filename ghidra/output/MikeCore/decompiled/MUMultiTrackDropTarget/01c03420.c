// Function: FUN_01c03420
// Address: 01c03420
// Size: 558 bytes
// Class: MUMultiTrackDropTarget


longlong * FUN_01c03420(void)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  plVar4 = &local_48;
  if ((char)local_80[0] != '\0') {
    plVar4 = local_80;
  }
  local_48 = CONCAT71(local_48._1_7_,(char)local_80[0]);
  *(undefined1 *)plVar4 = 0;
  if (((char)local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (local_88 == 0) goto LAB_01c035fd;
    FUN_00d50b00();
LAB_01c03497:
    local_80[0]._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    if (*(int *)(local_88 + 0xc) < 1) {
      local_50 = 0;
      lVar6 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = 0;
      local_50 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar5 * 8);
        if (lVar6 == 0) {
          FUN_00ca1380();
          local_38[0] = local_40[0];
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar3 = FUN_00d894f0();
          lVar6 = local_60;
          if (local_60 == 0) {
            lVar6 = 0;
          }
          else if (local_58 == '\0') {
            uVar3 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        lVar1 = *(longlong *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(local_88 + 0xc));
    }
    FUN_01c051e0();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_50 != '\0') goto LAB_01c0363e;
    if (lVar6 != 0) {
      FUN_00d50b00();
      goto LAB_01c0363e;
    }
  }
  else {
    if (local_88 != 0) goto LAB_01c03497;
LAB_01c035fd:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  lVar6 = 0;
LAB_01c0363e:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


