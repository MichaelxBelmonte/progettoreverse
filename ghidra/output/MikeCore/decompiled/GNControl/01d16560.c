// Function: FUN_01d16560
// Address: 01d16560
// Size: 612 bytes
// Class: GNControl


undefined8 FUN_01d16560(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_40;
  longlong local_38;
  
  lVar2 = DAT_027ef820;
  if (DAT_027ef820 == 0) {
LAB_01d16626:
    local_38 = 0;
LAB_01d16638:
    local_40 = 0;
LAB_01d16641:
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    local_38 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16626;
    FUN_00d50b00();
    local_40 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16638;
    FUN_00d50b00();
    lVar5 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16641;
    FUN_00d50b00();
    lVar3 = DAT_027ef820;
    if (DAT_027ef820 != 0) {
      FUN_00d50b00();
      lVar4 = DAT_027ef820;
      if (DAT_027ef820 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
      goto LAB_01d16646;
    }
  }
  bVar1 = true;
  lVar3 = 0;
  lVar4 = 0;
LAB_01d16646:
  local_88 = local_38;
  local_80 = local_40;
  local_78 = lVar5;
  local_70 = lVar3;
  local_68 = lVar4;
  FUN_007f7950(&local_80,&local_88,&local_78,&local_70);
  FUN_000b6830();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


