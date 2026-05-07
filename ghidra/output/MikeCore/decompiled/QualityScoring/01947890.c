// Function: FUN_01947890
// Address: 01947890
// Size: 1667 bytes
// Class: QualityScoring


/* WARNING: Removing unreachable block (ram,0x01947bb6) */
/* WARNING: Removing unreachable block (ram,0x01947bc2) */

void FUN_01947890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI == 0) {
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar3 = local_48;
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_68 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_38[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_0194d210();
    lVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      pVar4 = (pthread_key_t)local_68;
    }
    FUN_01320d00();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    lVar2 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132b1c0(0);
    lVar2 = local_48;
    if (((local_40[0] == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_70 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_012e6c30();
    local_d0 = lVar3;
    local_c8 = 0;
    FUN_0194e260(uVar6,&local_d0,param_3,param_4,0);
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    lVar2 = local_60;
    lVar3 = local_78;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    uVar6 = FUN_012c6a20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (local_70 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (local_68 != 0) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_0194dfd0();
  }
  local_88 = *param_2;
  local_80 = '\0';
  (**(code **)(&DAT_000017b0 + *unaff_RDI))(uVar6,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


