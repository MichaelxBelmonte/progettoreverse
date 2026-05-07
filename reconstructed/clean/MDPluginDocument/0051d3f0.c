// Function: FUN_0051d3f0
// Address: 0051d3f0
// Size: 1121 bytes
// Class: MDPluginDocument

void FUN_0051d3f0(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t in_RCX;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t local_40;
  char local_38;
  
  pVar5 = (void*)in_RCX;
  *(void*)(this_ptr + 0x290) = param_1;
  if (*(int64_t *)(this_ptr + 0x278) == 0) {
    return;
  }
  local_60 = param_2;
  if ((*arg1 != 0) || ((*param_2 != 0 && (*(int *)(*param_2 + 0xc) != 0)))) goto LAB_0051d42e;
  if ((g_0280a1d8 == 0) || (g_0280a1e1 == '\0')) {
    uVar6 = FUN_00e8cb50();
    pVar5 = (void*)in_RCX;
    if (g_0280a1d8 == 0) {
      FUN_013133d0(uVar6,0);
      lVar4 = g_0280a1d8;
      if (g_0280a1d8 != local_40) {
        in_RCX = g_0280a1d8;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
            in_RCX = g_0280a1d8;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        g_0280a1d8 = lVar4;
        if (in_RCX != 0) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      pVar5 = (void*)in_RCX;
      if ((lVar4 != 0) && (g_0280a1e0 == '\0')) {
        g_0280a1e0 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      g_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar4 = *arg1;
  if (lVar4 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_0051d829;
    local_58 = arg1 + 1;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_0051d822;
    }
  }
  else {
    local_58 = arg1 + 1;
    lVar1 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_40;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_0051d822:
      *(void*)local_58 = 1;
LAB_0051d829:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051d42e;
    }
    *arg1 = local_40;
    if (((char)lVar1 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)local_58 = 1;
LAB_0051d42e:
  if (*(char *)(this_ptr + 0x2e4) == '\0') {
    if (*arg1 == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
  }
  else {
    cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x390))();
    if (cVar2 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x370))();
    }
    if (*arg1 == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x368))();
    }
  }
  FUN_00d403d0();
  lVar4 = g_0270b7f0;
  if (g_0270b7f0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

