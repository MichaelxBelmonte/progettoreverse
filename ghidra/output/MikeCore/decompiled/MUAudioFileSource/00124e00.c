// Function: FUN_00124e00
// Address: 00124e00
// Size: 903 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0012504d) */
/* WARNING: Removing unreachable block (ram,0x00125059) */

void FUN_00124e00(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  undefined8 *in_RDX;
  char *pcVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  longlong local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_00127400();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_025ee570;
  *puVar2 = &DAT_025ee570;
  puVar2[6] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  (*DAT_025ee588)();
  FUN_00d23310();
  lVar1 = local_40;
  pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar5 >> 8),local_38[0]);
  pcVar6 = &local_90;
  if (local_38[0] != '\0') {
    pcVar6 = local_38;
  }
  local_90 = local_38[0];
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_01531f40();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532bc0(param_1,param_2);
  (**(code **)(*(longlong *)*in_RDX + 0x390))();
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  FUN_01532bd0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01532c20(*(undefined1 *)(unaff_RDI + 0xb0),1,0,0);
  FUN_00d6f370();
  (**(code **)(*(longlong *)*in_RDX + 0x370))();
  uVar7 = FUN_00df1af0();
  local_60 = local_50;
  local_58 = 0;
  local_a0 = DAT_026e18a0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar7 = FUN_00d50b00();
      local_a0 = DAT_026e18a0;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  DAT_026e18a0 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d6f570(uVar7,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


