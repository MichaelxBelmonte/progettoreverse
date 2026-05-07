// Function: FUN_0172cba0
// Address: 0172cba0
// Size: 1022 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_0172cba0(uint64_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  void *pvVar3;
  void* pVar4;
  int64_t lVar5;
  char *pcVar6;
  int unaff_ESI;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0172c390(param_1,unaff_ESI);
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (local_48 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (0x23 < unaff_ESI - 10U) goto switchD_0172cc18_caseD_b;
  lVar5 = (int64_t)&switchD_0172cc18::switchdataD_0172d140 +
          (int64_t)(int)(&switchD_0172cc18::switchdataD_0172d140)[unaff_ESI - 10U];
  pVar4 = (void*)lVar5;
  switch(unaff_ESI) {
  case 10:
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pVar4 = (void*)CONCAT71((int7)((uint64_t)lVar5 >> 8),local_40[0]);
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar2 = 0;
    if (local_48 == 0) break;
    uVar2 = 0x2802558;
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126ef70();
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0172ced5;
      }
LAB_0172cf8e:
      uVar2 = 0;
    }
    else {
      if (local_48 == 0) goto LAB_0172cf8e;
LAB_0172ced5:
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      if (local_40[0] == '\0') {
        if (local_48 == 0) goto LAB_0172cf80;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
LAB_0172cf3e:
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_0132dd30();
        FUN_00d50b20();
        bVar1 = false;
      }
      else {
        if (local_48 != 0) goto LAB_0172cf3e;
LAB_0172cf80:
        bVar1 = true;
      }
      FUN_00d50b20();
      if (bVar1) goto LAB_0172cf8e;
    }
    FUN_00d50b20();
    break;
  case 0x14:
  case 0x15:
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_016c2e90();
    break;
  case 0x1f:
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_018232b0();
    break;
  case 0x2a:
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_0124ae30();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 0x2d:
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_018847d0();
  }
switchD_0172cc18_caseD_b:
  FUN_00d50b20();
  return uVar2;
}

