// Function: FUN_014d1e00
// Address: 014d1e00
// Size: 598 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_014d1e00(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this_ptr + 1000))();
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*this_ptr + 0x378))();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) goto LAB_014d1f09;
  (**(code **)(*this_ptr + 0x378))();
  lVar1 = *arg1;
  if (lVar1 == local_48) {
    if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_014d1ef5;
    if (local_40[0] == '\0') {
      FUN_00d50b00();
      goto LAB_014d1eee;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_014d1eee:
      local_50 = arg1 + 1;
      *(void*)local_50 = 1;
LAB_014d1ef5:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014d1f09;
    }
    *arg1 = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_50 = arg1 + 1;
  *(void*)local_50 = 1;
LAB_014d1f09:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this_ptr + 1000))();
  FUN_00d50b00();
  FUN_0134c2c0();
  FUN_00d50b20();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = (**(code **)(*this_ptr + 1000))();
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_0134c2c0();
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  FUN_014bb250();
  FUN_014bb2b0();
  return;
}

