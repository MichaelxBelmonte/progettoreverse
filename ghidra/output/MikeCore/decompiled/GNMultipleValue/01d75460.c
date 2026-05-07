// Function: FUN_01d75460
// Address: 01d75460
// Size: 791 bytes
// Class: GNMultipleValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d75460(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  float fVar6;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  float local_44;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar3 = local_40;
  lVar2 = DAT_027fff38;
  if (DAT_027fff38 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    FUN_00d530a0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = FUN_00d3ed20();
    local_98 = DAT_027295d8;
    if (DAT_027295d8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_000175c0(uVar5,&local_98);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)unaff_RDI[0xe];
    uVar5 = FUN_00d3ed20();
    local_88 = DAT_027092c0;
    if (DAT_027092c0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_000175c0(uVar5,&local_88);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      fVar6 = (float)FUN_00d459e0();
      if (unaff_RDI[3] == 0) {
        local_44 = fVar6;
        (**(code **)(*unaff_RDI + 0x448))();
        fVar6 = local_44;
      }
      DAT_028b84f0 = 0;
      if ((((double)unaff_RDI[0x11] == 0.0) && (!NAN((double)unaff_RDI[0x11]))) &&
         (_DAT_023b2ef0 <
          (double)(float)((uint)(*(float *)(unaff_RDI + 0x12) - fVar6) & _DAT_02390140))) {
        local_44 = fVar6;
        (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x928))();
        *(float *)(unaff_RDI + 0x12) = local_44;
        DAT_028b84f0 = 1;
      }
      FUN_01d759a0();
    }
    FUN_01d759a0();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


