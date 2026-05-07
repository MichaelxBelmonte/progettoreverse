// Function: FUN_00bf9510
// Address: 00bf9510
// Size: 579 bytes
// Class: GNString
// String references:
//   "%@Controller.gnui"


void FUN_00bf9510(void)

{
  longlong *plVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar2;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  FUN_00d4efa0();
  uVar2 = FUN_00c7e7b0();
  local_90 = local_80;
  local_98 = 1;
  local_a0 = &DAT_024c5048;
  local_88 = 0;
  if (local_80 != 0) {
    uVar2 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar2 = FUN_00d8cb40(uVar2,&local_a0);
  local_40 = local_60;
  local_38 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar2 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  FUN_01f46240(uVar2,&local_40);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &DAT_024c5048;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_c0 == 0) {
    FUN_00b34b40();
  }
  else {
    plVar1 = (longlong *)FUN_00e8fc40();
    FUN_000161a0();
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[0xf] = 0;
    plVar1[0x10] = 0;
    *plVar1 = (longlong)&DAT_0254f710;
    plVar1[0xe] = (longlong)&DAT_0254fd58;
    plVar1[0x13] = (longlong)&DAT_0254fd88;
    plVar1[0x14] = 0;
    plVar1[0x15] = 0;
    FUN_00d500e0();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x5c8))();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


