// Function: FUN_00787770
// Address: 00787770
// Size: 1965 bytes
// Class: MUAraAudioSource
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00787770(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* pVar8;
  char *pcVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00757c60();
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    uVar10 = 0;
    goto LAB_00787f08;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_40 + 0xc);
  uVar10 = CONCAT71(0x28025,iVar1 == 1);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 1) && (param_2 != '\0')) {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar4 = local_40;
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    pcVar9 = &local_98;
    if (local_38[0] != '\0') {
      pcVar9 = local_38;
    }
    local_98 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 == '\0') && (lVar4 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar2 = g_02729620;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = g_02729620;
    }
    g_02729620 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_012e5ae0();
    lVar2 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00787a7c;
      }
LAB_00787a90:
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
LAB_00787a95:
      pvVar6 = _pthread_getspecific(pVar8);
      lVar3 = g_02729628;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
        lVar3 = g_02729628;
      }
      g_02729628 = lVar3;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_012e5f80();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == 0) goto LAB_00787a90;
LAB_00787a7c:
      local_44 = 0;
      if (*(int *)(lVar2 + 0xc) == 0) goto LAB_00787a95;
    }
    lVar3 = g_02729630;
    if (g_02729630 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_88 = local_58;
    local_80 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_80 = '\x01';
    pVar8 = 0;
    FUN_004f83c0(0,&local_88);
    lVar5 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11d0();
    local_78 = local_58;
    local_70 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_60 = 0;
    local_68 = CONCAT71(uStack_97,local_98);
    if (local_90 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_60 = '\x01';
    pVar8 = 0xffffffff;
    FUN_004a17d0(0xffffffff,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar3 = g_02729638;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar3 = g_02729638;
    }
    g_02729638 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
    uVar10 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00787f08:
  return uVar10 & 0xffffffff;
}

