// Function: FUN_00b76800
// Address: 00b76800
// Size: 592 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b76800(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int iVar5;
  void*puVar6;
  int iVar7;
  uint unaff_ESI;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int local_34;
  
  uVar4 = FUN_00ae7f20();
  iVar7 = *(int *)(this_ptr + 0x30);
  iVar5 = FUN_00ae7f20();
  iVar5 = iVar5 * iVar7;
  iVar7 = iVar5 + 7;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  iVar7 = iVar7 >> 3;
  uVar1 = *(void*)(this_ptr + 0x30);
  uVar2 = *(void*)(*(int64_t *)(this_ptr + 0x68) + 0x10);
  ___bzero();
  local_34 = iVar7 * unaff_ESI;
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x10))
            (&local_34,uVar2,param_3,param_4,uVar4,0,0,CONCAT44(1,iVar7),CONCAT44(uVar1,iVar7),uVar4
            );
  uVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(local_34,uVar2);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar3 = g_027653a0;
  if (local_b8 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00cc78b0();
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b20();
    }
  }
  puVar6 = *(void**)(this_ptr + 0x58);
  if (puVar6 == (void*)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    uVar4 = FUN_00c92160();
    lVar3 = *(int64_t *)(this_ptr + 0x58);
    *(void**)(this_ptr + 0x58) = puVar6;
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b20();
      puVar6 = *(void**)(this_ptr + 0x58);
    }
  }
  iVar5 = local_34;
  iVar7 = *(int *)(puVar6 + 3);
  FUN_00c8e340(uVar4,1);
  *(int *)(puVar6[2] + (int64_t)iVar7) = iVar5;
  *(int64_t *)(this_ptr + 0x48) = *(int64_t *)(this_ptr + 0x48) + (int64_t)local_34;
  ___bzero();
  *(void*)(this_ptr + 0x50) = 0;
  *(int64_t *)(this_ptr + 0x70) = *(int64_t *)(this_ptr + 0x70) + (uint64_t)unaff_ESI;
  return;
}

