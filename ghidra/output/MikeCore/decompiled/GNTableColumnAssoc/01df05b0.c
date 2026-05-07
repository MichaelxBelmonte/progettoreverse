// Function: FUN_01df05b0
// Address: 01df05b0
// Size: 601 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01df0795) */
/* WARNING: Removing unreachable block (ram,0x01df079e) */
/* WARNING: Removing unreachable block (ram,0x01df0692) */
/* WARNING: Removing unreachable block (ram,0x01df069f) */
/* WARNING: Removing unreachable block (ram,0x01df06e9) */
/* WARNING: Removing unreachable block (ram,0x01df06f2) */
/* WARNING: Removing unreachable block (ram,0x01df06bb) */

ulonglong FUN_01df05b0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_90;
  char local_88;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = DAT_027f2e68;
  if (DAT_027f2e68 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01d827c0();
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (param_2 != '\0') {
      FUN_01ccad60();
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        if (local_38 != '\0') {
          plVar6 = (longlong *)0x0;
        }
      }
      else {
        plVar6 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01db9a60();
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      if ((int)plVar7[0x27] != -1) {
        FUN_01caeb00();
        (**(code **)(*local_90 + 0x980))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar1 = plVar7[0x27];
        uVar4 = FUN_01dcc980();
        (**(code **)(*plVar7 + 0x978))(uVar4,(int)lVar1);
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar5 & 0xffffffff;
}


