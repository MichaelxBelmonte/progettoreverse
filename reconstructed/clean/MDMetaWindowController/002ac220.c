// Function: FUN_002ac220
// Address: 002ac220
// Size: 2431 bytes
// Class: MDMetaWindowController

void FUN_002ac220(int64_t *param_1,int64_t *param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  char *pcVar8;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*param_2 == 0) {
    FUN_002aea00();
    plVar2 = (int64_t *)*param_2;
    if (plVar2 == local_48) {
      if (((char)param_2[1] == '\0') && (local_48 != (int64_t *)0x0)) {
        param_1 = param_2;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_002ac2e4;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_2[1];
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (int64_t)local_48;
        if (((char)lVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = (int64_t)local_48;
        if (((char)lVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_002ac2e4:
      *(void*)(param_2 + 1) = 1;
    }
    (**(code **)(*(int64_t *)*param_2 + 0x460))();
  }
  (**(code **)(*this_ptr + 0x5f0))();
  (**(code **)(*(int64_t *)*arg1 + 0x600))();
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00639330();
  (**(code **)(*(int64_t *)*param_2 + 0x600))();
  FUN_00637c40();
  cVar4 = FUN_00763980();
  if ((cVar4 == '\0') && ((**(code **)(*(int64_t *)*arg1 + 0x468))(), local_f8 != 0)) {
    cVar5 = '\0';
LAB_002ac47e:
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01f27fe0();
    cVar5 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_002ac47e;
  }
  if (cVar5 == '\0') {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_48 + 0x450))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar7 = (void*)param_1;
    if (cVar4 != '\0') {
      FUN_00757c60();
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)param_1;
      if (local_48 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar1 = *(int *)((int64_t)local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        pVar7 = (void*)param_1;
        if (iVar1 == 1) {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          FUN_00d23310();
          pVar7 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
          pcVar8 = local_38;
          if (local_40[0] != '\0') {
            pcVar8 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == (int64_t *)0x0) goto LAB_002acad3;
          FUN_004f9670();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (int64_t *)0x0) {
            FUN_006500a0();
            if (local_40[0] == '\0') {
              if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if (local_48 != (int64_t *)0x0) {
              cVar4 = FUN_003b7710();
              if ((cVar4 == '\0') && (cVar4 = FUN_003b7780(), cVar4 == '\0')) {
                FUN_003b72f0();
              }
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00757c60();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (void*)param_1;
    if (local_48 != (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      iVar1 = *(int *)((int64_t)local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      pVar7 = (void*)param_1;
      if (iVar1 == 0) {
        FUN_00d50b20();
        goto LAB_002acad3;
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pVar7 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
      pcVar8 = local_38;
      if (local_40[0] != '\0') {
        pcVar8 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_004f9670();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_006500a0();
        if (local_40[0] == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_003b72f0();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
LAB_002acad3:
  FUN_00757c60();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_012ccb50();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00643690();
  }
  FUN_002aeac0();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

