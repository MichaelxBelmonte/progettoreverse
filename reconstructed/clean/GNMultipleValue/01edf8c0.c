// Function: FUN_01edf8c0
// Address: 01edf8c0
// Size: 1223 bytes
// Class: GNMultipleValue

uint64_t FUN_01edf8c0(uint64_t param_1,char param_2)

{
  uint3 uVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  uint uVar8;
  void*puVar9;
  uint64_t uVar10;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar2 = g_027fea38;
  if (g_027fea38 != 0) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 != '\0') {
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
    if (param_2 != '\0') {
      uVar4 = FUN_01caea00();
      *(void*)(this_ptr + 0x29) = uVar4;
      (**(code **)(*this_ptr + 0x620))();
    }
    goto LAB_01edfb0c;
  }
  FUN_01cae990();
  lVar2 = g_027fea40;
  if (g_027fea40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01cae990();
    lVar2 = g_027fea48;
    if (g_027fea48 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar2 = g_027fea50;
      if (g_027fea50 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar2 = g_027fea58;
        if (g_027fea58 != 0) {
          FUN_00d50b00();
        }
        uVar7 = (**(code **)(*local_40 + 0x50))();
        uVar4 = extraout_XMM0_Da;
        if (lVar2 != 0) {
          uVar4 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((char)uVar7 == '\0') {
          uVar8 = FUN_01e47f50(uVar4,param_2);
          uVar10 = (uint64_t)uVar8;
        }
        else {
          uVar10 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          if (param_2 != '\0') {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_026a45b0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            *(void*)((int64_t)puVar9 + 0x24) = 0;
            *(void*)((int64_t)puVar9 + 0x2c) = 0;
            (*g_026a45c8)();
            FUN_01e6a310();
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar10 = (uint64_t)CONCAT31((int3)((uint)uVar4 >> 8),this_ptr[0x27] != 0);
        if ((this_ptr[0x27] != 0) && (param_2 != '\0')) {
          lVar2 = this_ptr[0x28];
          puVar9 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &g_026a45b0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          *(void*)((int64_t)puVar9 + 0x24) = 0;
          *(void*)((int64_t)puVar9 + 0x2c) = 0;
          (*g_026a45c8)();
          FUN_01e6a2b0();
          (**(code **)(*this_ptr + 0x708))();
          FUN_01e69de0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = FUN_01e6a390();
          if (iVar6 == 0) {
            FUN_00d50b00();
            FUN_01e6a4a0();
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          *(int *)(this_ptr + 0x28) = (int)lVar2;
          uVar10 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
          FUN_00d50b20();
        }
      }
      goto LAB_01edfb0c;
    }
    if (this_ptr[0x27] != 0) {
      uVar1 = (uint3)((uint)uVar4 >> 8);
      uVar10 = (uint64_t)CONCAT31(uVar1,0 < (int)this_ptr[0x28]);
      if ((0 < (int)this_ptr[0x28]) && (param_2 != '\0')) {
        FUN_01ee0160();
        uVar10 = CONCAT71((uint7)uVar1,1);
      }
      goto LAB_01edfb0c;
    }
  }
  else if (this_ptr[0x27] != 0) {
    iVar6 = (int)this_ptr[0x28];
    iVar5 = FUN_01eddbf0();
    uVar1 = (uint3)((uint)iVar6 >> 8);
    uVar10 = (uint64_t)CONCAT31(uVar1,iVar6 < iVar5 + -1);
    if ((((iVar6 < iVar5 + -1) && (param_2 != '\0')) &&
        (uVar10 = CONCAT71((uint7)uVar1,1), this_ptr[0x27] != 0)) &&
       (lVar2 = this_ptr[0x28], iVar6 = FUN_01eddbf0(), (int)lVar2 < iVar6 + -1)) {
      FUN_01ee0160();
    }
    goto LAB_01edfb0c;
  }
  uVar10 = 0;
LAB_01edfb0c:
  return uVar10 & 0xffffffff;
}

