// Function: FUN_00e9e1c0
// Address: 00e9e1c0
// Size: 647 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e9e1c0(code *param_1,uint32_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  code *pcVar5;
  int iVar6;
  int unaff_ESI;
  int64_t this_ptr;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  
  uVar7 = 0xfffffffe;
  if ((((this_ptr != 0) && (0 < unaff_ESI)) && (unaff_ESI < 10)) &&
     ((iVar6 = (int)param_1, -1 < iVar6 && (iVar6 < 0xfb)))) {
    iVar1 = 0x1e;
    if (iVar6 != 0) {
      iVar1 = iVar6;
    }
    pcVar5 = *(code **)(this_ptr + 0x38);
    if (pcVar5 == 0x0) {
      pcVar5 = FUN_00e9e450;
      *(code **)(this_ptr + 0x38) = FUN_00e9e450;
      lVar3 = *(int64_t *)(this_ptr + 0x40);
    }
    else {
      lVar3 = *(int64_t *)(this_ptr + 0x40);
    }
    if (lVar3 == 0) {
      param_1 = FUN_00e9e460;
      *(code **)(this_ptr + 0x40) = FUN_00e9e460;
    }
    plVar2 = (int64_t *)(*pcVar5)(param_1,1);
    uVar7 = 0xfffffffd;
    if (plVar2 != (int64_t *)0x0) {
      *plVar2 = this_ptr;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      lVar3 = (**(code **)(this_ptr + 0x38))(0,1);
      plVar2[3] = lVar3;
      lVar3 = (**(code **)(this_ptr + 0x38))(extraout_XMM0_Da,1);
      plVar2[4] = lVar3;
      lVar4 = (**(code **)(this_ptr + 0x38))(extraout_XMM0_Da_00,1);
      plVar2[5] = lVar4;
      lVar3 = plVar2[3];
      if (lVar3 != 0) {
        if ((plVar2[4] != 0) && (lVar4 != 0)) {
          plVar2[1] = 0x200000002;
          *(void*)((int64_t)plVar2 + 0x28c) = 0;
          *(int *)(plVar2 + 0x53) = unaff_ESI;
          *(int *)(plVar2 + 0xe) = unaff_ESI * 100000 + -0x13;
          *(void*)(plVar2 + 0x52) = param_2;
          *(int *)(plVar2 + 0xb) = iVar1;
          plVar2[8] = plVar2[4];
          plVar2[9] = lVar3;
          plVar2[10] = 0;
          plVar2[7] = lVar3;
          *(int64_t **)(this_ptr + 0x30) = plVar2;
          *(void*)(this_ptr + 0xc) = 0;
          *(void*)(this_ptr + 0x24) = 0;
          *(void*)((int64_t)plVar2 + 0x5c) = 0x100;
          *(void*)((int64_t)plVar2 + 0x6c) = 0;
          *(void*)((int64_t)plVar2 + 0x74) = 0;
          *(void*)(plVar2 + 0x51) = 0xffffffff;
          plVar2[0x2c] = 0;
          plVar2[0x2d] = 0;
          plVar2[0x2a] = 0;
          plVar2[0x2b] = 0;
          plVar2[0x28] = 0;
          plVar2[0x29] = 0;
          plVar2[0x26] = 0;
          plVar2[0x27] = 0;
          plVar2[0x24] = 0;
          plVar2[0x25] = 0;
          plVar2[0x22] = 0;
          plVar2[0x23] = 0;
          plVar2[0x20] = 0;
          plVar2[0x21] = 0;
          plVar2[0x1e] = 0;
          plVar2[0x1f] = 0;
          plVar2[0x1c] = 0;
          plVar2[0x1d] = 0;
          plVar2[0x1a] = 0;
          plVar2[0x1b] = 0;
          plVar2[0x18] = 0;
          plVar2[0x19] = 0;
          plVar2[0x16] = 0;
          plVar2[0x17] = 0;
          plVar2[0x14] = 0;
          plVar2[0x15] = 0;
          plVar2[0x12] = 0;
          plVar2[0x13] = 0;
          plVar2[0x10] = 0;
          plVar2[0x11] = 0;
          plVar2[0x2e] = 0;
          plVar2[0x2f] = 0;
          *(void*)((int64_t)plVar2 + 0x294) = 1;
          return 0;
        }
        (**(code **)(this_ptr + 0x40))();
      }
      if (plVar2[4] != 0) {
        (**(code **)(this_ptr + 0x40))();
      }
      if (plVar2[5] != 0) {
        (**(code **)(this_ptr + 0x40))();
      }
      (**(code **)(this_ptr + 0x40))();
    }
  }
  return uVar7;
}

