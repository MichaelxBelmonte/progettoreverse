// Function: FUN_01c01f90
// Address: 01c01f90
// Size: 587 bytes
// Class: MUMultiTrackDropTarget

void FUN_01c01f90(double param_1,double param_2)

{
  void*puVar1;
  uint32_t in_ECX;
  int64_t *in_RDX;
  char *pcVar2;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar3;
  double dVar4;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_88 = *arg1;
  local_80 = '\0';
  uVar3 = FUN_00c9fe40(in_ECX,&local_88);
  puVar1 = local_48;
  pcVar2 = local_38;
  if (local_40[0] != '\0') {
    pcVar2 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (puVar1 != (void*)0x0)) {
    uVar3 = FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  *(char *)(this_ptr + 0x21) = (char)in_ECX;
  if (puVar1 == (void*)0x0) {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &g_02662ff0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    uVar3 = FUN_00d500e0();
    local_78 = *in_RDX;
    local_70 = '\0';
    FUN_01c022f0(uVar3,0);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 != param_2) || (NAN(dVar4) || NAN(param_2))) {
      puVar1[6] = param_2;
      dVar4 = param_2;
    }
    local_68 = *arg1;
    local_60 = '\0';
    local_40[0] = '\0';
    local_48 = puVar1;
    param_2 = (double)FUN_00ca0840(dVar4,&local_68);
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      param_2 = (double)FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      param_2 = (double)FUN_00d50b20();
    }
  }
  else {
    local_58 = *in_RDX;
    local_50 = '\0';
    FUN_01c022f0(uVar3,(void*)(this_ptr + 0x20));
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((double)puVar1[5] != param_1) || (NAN((double)puVar1[5]) || NAN(param_1))) {
      puVar1[5] = param_1;
      *(void*)(this_ptr + 0x20) = 1;
    }
    dVar4 = (double)puVar1[6];
    if ((dVar4 == param_2) && (!NAN(dVar4) && !NAN(param_2))) goto LAB_01c021c4;
    puVar1[6] = param_2;
  }
  *(void*)(this_ptr + 0x20) = 1;
  dVar4 = param_2;
LAB_01c021c4:
  FUN_00d50b20(dVar4);
  return;
}

