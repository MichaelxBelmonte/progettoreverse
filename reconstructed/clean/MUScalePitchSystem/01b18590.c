// Function: FUN_01b18590
// Address: 01b18590
// Size: 835 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint32_t FUN_01b18590(void* param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  uint32_t uVar4;
  int unaff_ESI;
  uint32_t uVar5;
  int64_t local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return 0xffffffff;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (unaff_ESI == -1000000) {
LAB_01b188b7:
    uVar4 = uVar5;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01740240();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01b1867b;
      }
    }
    else if (local_40 != 0) {
LAB_01b1867b:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01739620();
      if (cVar1 == '\0') {
LAB_01b18738:
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739a80();
        if (cVar1 == '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01739620();
          if (cVar1 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01739960();
            if (cVar1 != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar1 = FUN_01739b20();
              if (cVar1 == '\0') {
                uVar5 = 1;
                cVar2 = '\0';
                goto LAB_01b188a5;
              }
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01739b20();
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_01739620();
            uVar5 = 2;
          }
          else {
            uVar5 = 5;
            cVar2 = '\0';
          }
        }
        else {
          uVar5 = 4;
          cVar2 = '\0';
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739960();
        if (cVar1 != '\0') goto LAB_01b18738;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739a80();
        uVar5 = 0;
        cVar2 = '\0';
        if (cVar1 != '\0') goto LAB_01b18738;
      }
LAB_01b188a5:
      FUN_00d50b20();
      uVar4 = 0xffffffff;
      if (cVar2 != '\0') goto LAB_01b188ba;
      goto LAB_01b188b7;
    }
    uVar4 = 0xffffffff;
  }
LAB_01b188ba:
  FUN_00d50b20();
  return uVar4;
}

