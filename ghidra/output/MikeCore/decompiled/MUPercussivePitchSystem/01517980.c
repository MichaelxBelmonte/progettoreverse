// Function: FUN_01517980
// Address: 01517980
// Size: 1528 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01517afc) */
/* WARNING: Removing unreachable block (ram,0x01517b05) */
/* WARNING: Removing unreachable block (ram,0x01517a1a) */
/* WARNING: Removing unreachable block (ram,0x01517a23) */
/* WARNING: Removing unreachable block (ram,0x01517a8d) */
/* WARNING: Removing unreachable block (ram,0x01517a96) */
/* WARNING: Removing unreachable block (ram,0x01517c1b) */
/* WARNING: Removing unreachable block (ram,0x01517c28) */

void FUN_01517980(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  undefined1 local_res8;
  undefined1 *local_res10;
  undefined1 *local_res18;
  undefined1 local_118 [8];
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f0;
  undefined1 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_8c;
  longlong local_88;
  char local_80;
  undefined8 local_68;
  longlong local_50;
  char local_48;
  
  pVar7 = in_ECX;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = in_RDX;
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_8c = param_4;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_68._0_1_ = (char)in_ECX;
  if ((char)local_68 == '\0') {
    local_68 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a8);
    pVar7 = 0;
    local_68 = FUN_016cb5f0(0,0);
    pvVar4 = _pthread_getspecific(pVar7);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_50;
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01656080(local_a0);
    pVar7 = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  if (param_3 != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar1 = *local_98;
    bVar2 = FUN_01514480(0,local_res8);
    local_80 = '\0';
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    pVar7 = (pthread_key_t)&local_108;
    local_108 = uVar1;
    bVar3 = FUN_01515040(0,local_118,local_68,uVar6);
    if (((bVar3 | bVar2) == 1) && (local_res10 != (undefined1 *)0x0)) {
      *local_res10 = 1;
    }
  }
  if ((char)local_8c != '\0') {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = *local_98;
    local_c0 = 0;
    local_b0 = 0;
    bVar2 = FUN_01516720(0,local_d8,local_68,uVar6);
    if ((bVar2 & local_res18 != (undefined1 *)0x0) == 1) {
      *local_res18 = 1;
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


