// Function: FUN_01a18fb0
// Address: 01a18fb0
// Size: 708 bytes
// Class: GNValue

void FUN_01a18fb0(uint32_t param_1,uint32_t param_2)

{
  char cVar1;
  char cVar2;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int64_t *local_48;
  char local_40;
  
  uVar6 = param_2;
  uVar4 = FUN_01e3f820();
  FUN_01a18ed0();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*this_ptr + 0x9a0))();
  cVar1 = (**(code **)(*this_ptr + 0xb58))();
  uVar5 = (**(code **)(*this_ptr + 0xb20))();
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))(param_1,param_2);
  (**(code **)(*this_ptr + 0x640))();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01d91db0();
  if (cVar2 != '\0') {
    (**(code **)(*local_48 + 0x3f0))(uVar4,uVar6,0,cVar1);
  }
  lVar3 = this_ptr[0x43];
  if (lVar3 == 0) {
    FUN_01a18460();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_01a18660();
    }
    lVar3 = this_ptr[0x43];
    if (lVar3 == 0) goto LAB_01a191da;
  }
  FUN_00d50b00();
  FUN_01d48ff0(uVar4,uVar6,uVar4,uVar6);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_01a191da:
  if (cVar1 != '\0') {
    (**(code **)(*local_48 + 0x3f8))(uVar4,uVar6,(int)this_ptr[0x2e],uVar5);
  }
  FUN_01d48390();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

