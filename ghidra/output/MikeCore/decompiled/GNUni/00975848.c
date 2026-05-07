// Function: FUN_00975848
// Address: 00975848
// Size: 1038 bytes
// Class: GNUni


void FUN_00975848(undefined4 param_1,void *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  byte local_90;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  
  *unaff_RDI = &DAT_02520590;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  *(undefined1 *)(unaff_RDI + 8) = 0;
  unaff_RDI[0xb] = &DAT_0251c5a8;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  *(undefined2 *)(unaff_RDI + 0xf) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xac) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xa4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  unaff_RDI[0x17] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0xdc) = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x1a] = 0;
  *(undefined1 *)(unaff_RDI + 0x1b) = 0;
  unaff_RDI[0x1c] = &DAT_0251c338;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  *(undefined4 *)(unaff_RDI + 0x23) = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x30] = 0;
  *(undefined4 *)(unaff_RDI + 0x31) = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x32] = 0;
  *(undefined1 *)(unaff_RDI + 0x3d) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 500) = 0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x40] = 0;
  unaff_RDI[0x41] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x43] = &DAT_0251c3a0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x48] = 0;
  unaff_RDI[0x47] = 0;
  unaff_RDI[0x46] = 0;
  unaff_RDI[0x45] = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x4b] = 0x100000001;
  unaff_RDI[0x50] = 0;
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x4e] = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x4c] = 0;
  *(undefined2 *)(unaff_RDI + 0x51) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x28a) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x28b) = 0x1010101;
  *(undefined2 *)((longlong)unaff_RDI + 0x28f) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x291) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c7) = 0;
  unaff_RDI[0x58] = 0;
  unaff_RDI[0x57] = 0;
  unaff_RDI[0x56] = 0;
  unaff_RDI[0x55] = 0;
  unaff_RDI[0x54] = 0;
  unaff_RDI[0x53] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2cf) = 0x100010000010001;
  *(undefined4 *)((longlong)unaff_RDI + 0x2d7) = 0;
  *(undefined4 *)(unaff_RDI + 0x3e) = 0;
  unaff_RDI[0x60] = 0;
  unaff_RDI[0x5f] = 0;
  unaff_RDI[0x5e] = 0;
  local_48 = *unaff_RSI;
  local_40 = (longlong *)unaff_RSI[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_68 = unaff_RDI + 1;
  local_60 = unaff_RDI + 3;
  local_58 = unaff_RDI + 9;
  local_50 = unaff_RDI + 0xb;
  local_70 = plVar3;
  local_38 = param_1;
  FUN_00975c9c(param_2,&local_48,param_1,&local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


