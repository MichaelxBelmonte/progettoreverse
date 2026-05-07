// Function: FUN_01c1d680
// Address: 01c1d680
// Size: 1181 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c1da3c) */
/* WARNING: Removing unreachable block (ram,0x01c1da45) */
/* WARNING: Removing unreachable block (ram,0x01c1d971) */
/* WARNING: Removing unreachable block (ram,0x01c1d97a) */
/* WARNING: Removing unreachable block (ram,0x01c1d73a) */
/* WARNING: Removing unreachable block (ram,0x01c1d743) */
/* WARNING: Removing unreachable block (ram,0x01c1db01) */
/* WARNING: Removing unreachable block (ram,0x01c1db0a) */

void FUN_01c1d680(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  
  FUN_01e3b710();
  *(undefined4 *)(unaff_RDI + 0x160) = 1;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_0038d4c0();
  *puVar2 = &DAT_02665840;
  (*DAT_02665858)();
  puVar3 = *(undefined8 **)(unaff_RDI + 0x168);
  if (puVar3 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x168) = puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01c1afc0();
  lVar1 = local_80;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_00d243f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x170);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar1;
  FUN_01c11120();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(undefined4 *)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(undefined1 *)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(undefined4 *)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c1) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c9) = 0;
  *puVar3 = &DAT_026696e8;
  puVar3[2] = &DAT_0266a2b0;
  puVar3[0x3b] = &DAT_0266a2f0;
  puVar3[0x3c] = 0;
  *(undefined1 *)(puVar3 + 0x3d) = 0;
  puVar3[0x3e] = 0;
  *(undefined1 *)(puVar3 + 0x3f) = 0;
  (*DAT_02669700)();
  lVar1 = *(longlong *)(unaff_RDI + 0x198);
  *(undefined8 **)(unaff_RDI + 0x198) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x1cc) = 1;
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = DAT_027e9270;
  if (DAT_027e9270 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41430(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_c0 = DAT_027e9278;
  if (DAT_027e9278 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d41430(&local_b0,&local_c0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = DAT_027e9280;
  if (DAT_027e9280 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


