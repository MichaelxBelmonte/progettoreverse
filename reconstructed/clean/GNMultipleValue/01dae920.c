// Function: FUN_01dae920
// Address: 01dae920
// Size: 634 bytes
// Class: GNMultipleValue

void FUN_01dae920(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  float fVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Dc;
  uint32_t in_XMM1_Dc;
  float fVar7;
  int64_t *local_78;
  char local_70;
  float local_34;
  
  local_34 = (float)(**(code **)(*this_ptr + 0xb10))();
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = g_02390124 - local_34;
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  uVar6 = extraout_XMM0_Dc;
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*local_78 + 0x3f0))(uVar4,param_2,0,uVar3,uVar4,uVar6,param_2,in_XMM1_Dc);
  fVar5 = local_34;
  if ((*(int *)((int64_t)this_ptr + 0x18c) == 0x10) &&
     (lVar1 = this_ptr[0x32], fVar5 = g_02390d00, lVar1 != 0)) {
    uVar6 = (uint32_t)this_ptr[0x2e];
    FUN_00d50b00();
    uVar4 = FUN_00c71d60();
    *(void*)(this_ptr + 0x2e) = uVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar5 = (float)(**(code **)(*this_ptr + 0xb10))();
    cVar2 = (**(code **)(*this_ptr + 0xaf0))();
    if (cVar2 != '\0') {
      fVar5 = g_02390124 - fVar5;
    }
    *(void*)(this_ptr + 0x2e) = uVar6;
  }
  fVar7 = fVar5;
  uVar6 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  FUN_01cc0c20(uVar6,fVar5,local_34,fVar7);
  FUN_00d50b20();
  return;
}

