// Function: FUN_01953330
// Address: 01953330
// Size: 1247 bytes
// Class: MULSSGenerator

int64_t * FUN_01953330(void* param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  char *pcVar7;
  void* pVar8;
  int64_t *this_ptr;
  char *pcVar9;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  cVar4 = (char)param_1;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_50 + 0xc);
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) goto LAB_01953489;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar2 = *param_2;
  if (lVar2 == local_50) {
    if (((char)param_2[1] != '\0') || (local_50 == 0)) goto LAB_01953475;
    if (local_48[0] == '\0') {
      FUN_00d50b00();
      goto LAB_0195346e;
    }
  }
  else {
    lVar3 = param_2[1];
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_50;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_0195346e:
      local_58 = param_2 + 1;
      *(void*)local_58 = 1;
LAB_01953475:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01953489;
    }
    *param_2 = local_50;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
  }
  local_58 = param_2 + 1;
  *(void*)local_58 = 1;
LAB_01953489:
  if (cVar4 == '\0') {
    FUN_01941c70();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01390340();
    bVar5 = 1;
    if (cVar4 == '\0') {
      FUN_01941c70();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      pcVar7 = local_38;
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = pcVar7;
      }
      local_38[0] = local_48[0];
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar7;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar5 = FUN_0134a7d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar5 != 0) {
      FUN_01941c70();
      return this_ptr;
    }
  }
  lVar2 = *param_2;
  *(void*)(this_ptr + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

