// Function: FUN_0172f140
// Address: 0172f140
// Size: 901 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0172f140(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t in_RCX;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  
  if ((g_028adb48 == 0) || (g_028adb51 == '\0')) {
    uVar7 = FUN_00e8cb50();
    if (g_028adb48 == 0) {
      FUN_01536600(uVar7,8);
      lVar5 = g_028adb48;
      if (g_028adb48 != local_60) {
        in_RCX = g_028adb48;
        if (local_58 == '\0') {
          if (local_60 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_60;
            in_RCX = g_028adb48;
          }
        }
        else {
          local_58 = '\0';
          lVar5 = local_60;
        }
        g_028adb48 = lVar5;
        if (in_RCX != 0) {
          FUN_00d50b20();
          lVar5 = local_60;
        }
      }
      if ((lVar5 != 0) && (g_028adb50 == '\0')) {
        g_028adb50 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_60;
      }
      if ((local_58 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      g_028adb51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adb51 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar5 = *arg1;
  lVar2 = arg1[1];
  if (((char)lVar2 != '\0') && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_012e9900(param_1,param_2);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_0172f2f0;
    }
  }
  else if (local_60 != 0) {
LAB_0172f2f0:
    if (0 < *(int *)(local_60 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)in_RCX);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01263cf0();
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific((void*)in_RCX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01263ef0();
          if (cVar3 == '\0') {
            pvVar4 = _pthread_getspecific((void*)in_RCX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_0126f100();
            if (cVar3 == '\0') {
              pvVar4 = _pthread_getspecific((void*)in_RCX);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_0126cd60();
              if (cVar3 == '\0') {
                FUN_00d21140();
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_60 + 0xc));
    }
    uVar7 = FUN_001159b0();
    bVar1 = false;
    goto LAB_0172f493;
  }
  bVar1 = true;
LAB_0172f493:
  FUN_00d242c0(uVar7,0);
  *(void*)(this_ptr + 0x44) = 0xffffffff;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (((char)lVar2 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

