// Function: FUN_01d32180
// Address: 01d32180
// Size: 872 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d321ef) */
/* WARNING: Removing unreachable block (ram,0x01d321fb) */

void FUN_01d32180(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_d8;
  char local_d0;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)((longlong)unaff_RDI + 0x41) == '\0') {
    (**(code **)(*unaff_RDI + 0x520))();
    if (local_d0 == '\0') {
      if (local_d8 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_d8 == 0) {
      return;
    }
    if (0 < *(int *)(local_d8 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_d8 + 0x10) + lVar4 * 8);
        FUN_01d2b630();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_019ba260();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_68 = lVar2;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027edfd0;
        if (DAT_027edfd0 != 0) {
          FUN_00d50b00();
        }
        local_b0 = lVar2;
        local_a8 = '\x01';
        FUN_01ccab60(param_1,&local_b0);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_70 = lVar2;
        FUN_00d4efa0();
        local_a0 = lVar2;
        local_98 = '\0';
        FUN_00c841b0(param_1,&local_a0);
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_70;
        if (lVar2 != 0) {
          local_90 = local_68;
          local_88 = '\0';
          local_80 = local_70;
          local_78 = '\0';
          (**(code **)(*plVar1 + 0x90))(param_1,&local_80);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_d8 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  return;
}


