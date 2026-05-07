// Function: FUN_014c0100
// Address: 014c0100
// Size: 652 bytes
// Class: MUSampledFunction

void FUN_014c0100(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t *this_ptr;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  char local_4c;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  plVar7 = param_1;
  local_50 = param_2;
  local_4c = unaff_SIL;
  (**(code **)(*this_ptr + 0x378))();
  lVar5 = local_40;
  pVar6 = (void*)plVar7;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    (**(code **)(*this_ptr + 0x378))();
    lVar2 = local_40;
    lVar5 = *param_1;
    if (lVar5 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == 0)) goto LAB_014c01e9;
      local_48 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c01e2;
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar1 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar2;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_014c01e2:
        *(void*)local_48 = 1;
LAB_014c01e9:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014c01fd;
      }
      *param_1 = local_40;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_48 = 1;
  }
LAB_014c01fd:
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01334f30();
  if (cVar3 == '\0') {
    return;
  }
  local_60 = *param_1;
  local_58 = '\0';
  local_80 = 0;
  local_78 = 0;
  FUN_014c03f0(&local_60,&local_68,&local_80);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_4c != '\0') {
    lVar5 = (**(code **)(*this_ptr + 0x388))();
    if (lVar5 < local_70) {
      if (this_ptr[0x1d] != 0x7fffffffffffffff) {
        FUN_00d64850();
        this_ptr[0x1d] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
      if (this_ptr[0x1e] == 0x7fffffffffffffff) goto LAB_014c0332;
      FUN_00d64850();
      this_ptr[0x1e] = 0x7fffffffffffffff;
    }
    else {
      if (this_ptr[0x1d] == local_70) goto LAB_014c0332;
      FUN_00d64850();
      this_ptr[0x1d] = local_70;
    }
    FUN_00d64910();
  }
LAB_014c0332:
  if ((((char)local_50 != '\0') && (cVar3 = (**(code **)(*this_ptr + 0x3c0))(), cVar3 == '\0')) &&
     (this_ptr[0x1e] != local_68)) {
    FUN_00d64850();
    this_ptr[0x1e] = local_68;
    FUN_00d64910();
  }
  return;
}

