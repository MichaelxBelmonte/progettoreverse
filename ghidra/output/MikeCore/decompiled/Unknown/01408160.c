// Function: FUN_01408160
// Address: 01408160
// Size: 1741 bytes
// Class: Unknown
// String references:
//   "%@is"
//   "%@%@%@"


/* WARNING: Removing unreachable block (ram,0x014085b4) */
/* WARNING: Removing unreachable block (ram,0x014085b9) */
/* WARNING: Removing unreachable block (ram,0x014085c7) */
/* WARNING: Removing unreachable block (ram,0x014085d0) */
/* WARNING: Removing unreachable block (ram,0x014084d9) */
/* WARNING: Removing unreachable block (ram,0x01408510) */
/* WARNING: Removing unreachable block (ram,0x01408515) */
/* WARNING: Removing unreachable block (ram,0x0140851d) */
/* WARNING: Removing unreachable block (ram,0x01408522) */
/* WARNING: Removing unreachable block (ram,0x0140854e) */
/* WARNING: Removing unreachable block (ram,0x01408557) */
/* WARNING: Removing unreachable block (ram,0x014084df) */
/* WARNING: Removing unreachable block (ram,0x01408410) */
/* WARNING: Removing unreachable block (ram,0x014084e8) */
/* WARNING: Removing unreachable block (ram,0x014084ff) */
/* WARNING: Removing unreachable block (ram,0x014082f9) */
/* WARNING: Removing unreachable block (ram,0x01408303) */
/* WARNING: Removing unreachable block (ram,0x01408315) */
/* WARNING: Removing unreachable block (ram,0x0140831e) */
/* WARNING: Removing unreachable block (ram,0x014083c6) */
/* WARNING: Removing unreachable block (ram,0x014083cb) */
/* WARNING: Removing unreachable block (ram,0x014083d9) */
/* WARNING: Removing unreachable block (ram,0x014083e2) */
/* WARNING: Removing unreachable block (ram,0x014087b2) */
/* WARNING: Removing unreachable block (ram,0x014081bc) */
/* WARNING: Removing unreachable block (ram,0x014081c5) */
/* WARNING: Removing unreachable block (ram,0x0140868d) */
/* WARNING: Removing unreachable block (ram,0x0140869a) */

longlong * FUN_01408160(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d8c7a0();
  FUN_00d99300();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d99300();
  puVar3 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_108 = local_48;
  local_100 = '\0';
  cVar4 = FUN_00d90870();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_0140880f;
  }
  FUN_00d8c7a0();
  FUN_00d8c7a0();
  FUN_00d97ce0();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_f8 = DAT_027cd570;
  if (DAT_027cd570 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_00d8dbf0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  FUN_00d8f140();
  lVar1 = DAT_027c09c0;
  while( true ) {
    DAT_027c09c0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = lVar1;
    cVar4 = FUN_00d90870();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027cd570;
    if (cVar4 == '\0') break;
    if (DAT_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar1;
    local_d0 = '\x01';
    FUN_00d8dbf0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d8f140();
    FUN_00d50b20();
    lVar1 = DAT_027c09c0;
  }
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  local_c8 = &DAT_024c5048;
  local_110 = &DAT_024c5048;
  local_118 = puVar5;
  FUN_002bd7b0(&local_110,&local_118,3);
  FUN_00d8cb40();
  lVar1 = *param_2;
  if (lVar1 == local_48) {
    if (((char)param_2[1] != '\0') || (local_48 == 0)) goto LAB_0140870d;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_01408704;
    }
LAB_014086c2:
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar2 = param_2[1];
    if (local_40 != '\0') {
      *param_2 = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014086c2;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *param_2 = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01408704:
    *(undefined1 *)(param_2 + 1) = 1;
LAB_0140870d:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0140880f:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


