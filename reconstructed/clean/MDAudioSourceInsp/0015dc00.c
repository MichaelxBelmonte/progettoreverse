// Function: FUN_0015dc00
// Address: 0015dc00
// Size: 962 bytes
// Class: MDAudioSourceInsp

void FUN_0015dc00(double param_1,double param_2)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t this_ptr;
  bool bVar4;
  double dVar5;
  double dVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  if (param_2 <= param_1) {
    return;
  }
  FUN_0054ddc0();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    bVar2 = false;
    local_70 = 0;
LAB_0015defa:
    bVar4 = false;
    local_48 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    if (local_48 == 0) {
      local_70 = 0;
      bVar2 = false;
      bVar4 = false;
    }
    else {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_70 == 0) {
        local_70 = 0;
        bVar2 = false;
        bVar4 = false;
        if (local_68 != '\0') {
          local_70 = 0;
          bVar2 = false;
          bVar4 = false;
        }
      }
      else if (local_68 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar4 = local_70 != 0;
      }
      else {
        bVar4 = true;
        bVar2 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar4) goto LAB_0015defa;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(g_023944d8 + param_1,(param_2 - param_1) + g_023944e0);
    if (local_48 == 0) goto LAB_0015defa;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = true;
    if (*(int *)(local_48 + 0xc) != 0) {
      dVar5 = (double)FUN_01266200();
      dVar6 = (double)FUN_012664b0();
      if (dVar5 < dVar6) {
        if (((param_1 < param_2) && (dVar5 <= param_1)) && (param_2 <= dVar6)) {
          bVar4 = true;
          goto LAB_0015df11;
        }
        bVar4 = true;
        if ((param_1 < param_2) &&
           (((param_1 <= dVar5 && (dVar5 < param_2)) || ((param_1 < dVar6 && (dVar5 <= param_2))))))
        {
          if (param_1 < dVar5) {
            FUN_0054ec70();
          }
          bVar4 = true;
          if (dVar6 < param_2) {
            FUN_0054ec70();
          }
          goto LAB_0015df11;
        }
      }
    }
  }
  FUN_0054ec70(param_1,param_2);
LAB_0015df11:
  if ((bVar2) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

