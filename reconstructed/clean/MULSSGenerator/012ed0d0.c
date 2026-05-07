// Function: FUN_012ed0d0
// Address: 012ed0d0
// Size: 764 bytes
// Class: MULSSGenerator

void FUN_012ed0d0(uint32_t param_1)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  bool bVar5;
  undefined3 uVar7;
  void* pVar6;
  char *pcVar8;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  if (this_ptr[0xb] != 0) {
    if (unaff_SIL == '\0') {
      return;
    }
    *(void*)(this_ptr + 0xd) = 0;
                                            (**(code **)(*this_ptr + 0x370))();
    return;
  }
  FUN_00d64850();
  *(int *)(this_ptr + 0xe) = (int)this_ptr[0xe] + 1;
  FUN_00d64910();
  if (unaff_SIL != '\0') {
    FUN_012f5600();
  }
  if ((char)this_ptr[0x11] == '\0') {
    return;
  }
  local_38 = '\0';
  lVar3 = FUN_00e8b990();
  uVar7 = (undefined3)((uint)param_1 >> 8);
  bVar5 = true;
  if ((lVar3 != 0) && (FUN_00cb1f10(), local_50 != 0)) {
    local_38 = local_48[0] != '\0';
    if ((bool)local_38) {
      local_48[0] = '\0';
    }
    cVar2 = FUN_00db6490();
    bVar5 = false;
    bVar1 = false;
    if (cVar2 != '\0') goto joined_r0x012ed3c8;
  }
  FUN_00d23310();
  pVar6 = CONCAT31(uVar7,local_48[0]);
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = bVar5;
  if (local_40[0] == '\0') {
    if (local_50 == 0) goto joined_r0x012ed3c8;
    FUN_00d50b00();
  }
  else if (local_50 == 0) goto joined_r0x012ed3c8;
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012ed29a;
    }
LAB_012ed303:
    bVar5 = false;
    local_50 = 0;
  }
  else {
    if (local_50 == 0) goto LAB_012ed303;
LAB_012ed29a:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (local_50 == 0) {
      local_50 = 0;
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_50 != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0134c600();
    if (cVar2 == '\0') {
      FUN_00d64850();
      *(void*)(this_ptr + 0x11) = 0;
      FUN_00d64910();
    }
    if (bVar5) {
      FUN_00d50b20();
    }
  }
joined_r0x012ed3c8:
  if ((local_38 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
  return;
}

