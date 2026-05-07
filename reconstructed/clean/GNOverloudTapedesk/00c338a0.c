// Function: FUN_00c338a0
// Address: 00c338a0
// Size: 589 bytes
// Class: GNOverloudTapedesk

void FUN_00c338a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint8_t uVar3;
  int64_t *this_ptr;
  int64_t **pplVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t in_XMM1_Dc;
  int64_t *plVar8;
  uint32_t local_4c;
  int64_t *local_40;
  char local_38;
  
  pplVar4 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  FUN_00209700();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00c33900;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_00c33900:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_4c = (uint32_t)plVar1[0x3d];
    *(void*)(plVar1 + 0x3d) = 0x3f8eb852;
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar8 + 0x3f0))(uVar5,0xf,0,uVar3);
  this_ptr[0x3a] = 0x3f8000003f19999a;
  uVar3 = 0;
  plVar8 = plVar1;
  uVar6 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar7 = (**(code **)(*this_ptr + 0x930))();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  FUN_00c32cc0(uVar6,param_2,uVar7,g_02390128,plVar8,uVar3,uVar6,uVar5,param_2,in_XMM1_Dc);
  if (plVar1 != (int64_t *)0x0) {
    *(void*)(plVar1 + 0x3d) = local_4c;
  }
  FUN_00d50b20();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

