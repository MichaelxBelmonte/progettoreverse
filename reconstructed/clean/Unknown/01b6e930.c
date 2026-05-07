// Function: FUN_01b6e930
// Address: 01b6e930
// Size: 608 bytes
// Class: Unknown

void FUN_01b6e930(float param_1,float param_2,void*param_3)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int iVar4;
  uint64_t *in_RCX;
  uint64_t *puVar5;
  int iVar6;
  int *in_RDX;
  char *pcVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint64_t local_58;
  int64_t local_50;
  char local_48 [8];
  uint32_t local_40;
  int iStack_3c;
  char local_38 [8];
  
  puVar5 = in_RCX;
  (**(code **)(*arg1 + 0xa60))();
  lVar1 = local_50;
  pVar3 = (void*)puVar5;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 == 0) || (arg1[0x2b] == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = arg1[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*arg1 + 0xa70))();
    FUN_012523c0(&local_58,0,&local_40,0);
    pcVar7 = local_38;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_01e3f820();
      fVar10 = 0.0;
      if (local_58 >> 0x20 != 0) {
        fVar10 = (float)(**(code **)(*arg1 + 0xa68))();
      }
      if (iStack_3c != 0) {
        param_2 = (float)(**(code **)(*arg1 + 0xa68))();
      }
      uVar8 = -(uint)(param_2 - fVar10 < g_02390d28);
      fVar9 = (float)(~uVar8 & g_02390d30 | (uint)(g_0239011c * (param_2 - fVar10)) & uVar8);
      iVar4 = (uint)(local_58 >> 0x20 == 0) * 3;
      if (fVar10 + fVar9 < param_1) {
        iVar4 = 3;
      }
      if (param_1 < fVar10) {
        iVar4 = 3;
      }
      if (in_RDX != (int *)0x0) {
        iVar6 = 2;
        if (iStack_3c == 0) {
          iVar6 = iVar4;
        }
        if (param_1 < param_2 - fVar9) {
          iVar6 = iVar4;
        }
        if (param_2 < param_1) {
          iVar6 = iVar4;
        }
        *in_RDX = iVar6;
      }
      if (in_RCX != (uint64_t *)0x0) {
        *in_RCX = local_58;
      }
      if (param_3 != (void*)0x0) {
        *param_3 = CONCAT44(iStack_3c,local_40);
      }
    }
    *this_ptr = local_50;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

