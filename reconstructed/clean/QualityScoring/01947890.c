// Function: FUN_01947890
// Address: 01947890
// Size: 1667 bytes
// Class: QualityScoring
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01947890(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI == 0) {
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar3 = local_48;
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
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
      pVar4 = (void*)local_68;
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
      pVar4 = (void*)local_60;
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
      pVar4 = (void*)local_60;
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
  (**(code **)(&g_000017b0 + *this_ptr))(uVar6,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

