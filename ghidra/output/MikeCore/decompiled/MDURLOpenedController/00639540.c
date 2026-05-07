// Function: FUN_00639540
// Address: 00639540
// Size: 747 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x006397c7) */
/* WARNING: Removing unreachable block (ram,0x006397d3) */

void FUN_00639540(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  lVar1 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027258e8;
  if (DAT_027258e8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d31230(&local_a8,&local_b8);
  local_38 = local_58;
  local_30 = 0;
  local_98 = DAT_027258a0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      local_98 = DAT_027258a0;
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  DAT_027258a0 = local_98;
  if (local_98 != 0) {
    local_30 = '\x01';
    FUN_00d50b00();
  }
  lVar2 = DAT_027258f0;
  local_90 = '\x01';
  if (DAT_027258f0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  local_28 = local_48;
  local_20 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_20 = '\x01';
  FUN_004ae0b0(&local_28,&local_38);
  lVar2 = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_60 = '\0';
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


