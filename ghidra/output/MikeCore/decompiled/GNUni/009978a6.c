// Function: FUN_009978a6
// Address: 009978a6
// Size: 862 bytes
// Class: GNUni


void FUN_009978a6(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  *unaff_RDI = (longlong)&DAT_02521700;
  unaff_RDI[1] = (longlong)(unaff_RDI + 1);
  unaff_RDI[2] = (longlong)(unaff_RDI + 1);
  unaff_RDI[3] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[4] = (longlong)(unaff_RDI + 5);
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = (longlong)&DAT_025170b0;
  unaff_RDI[10] = (longlong)&DAT_02517058;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  *(undefined2 *)(unaff_RDI + 0xe) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x72) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x76) = 0;
  unaff_RDI[0xf] = (longlong)&DAT_02517058;
  *(undefined2 *)(unaff_RDI + 0x13) = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x10] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x9a) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x9e) = 0;
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  *(undefined1 *)(unaff_RDI + 0x1b) = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  *(undefined2 *)(unaff_RDI + 0x1f) = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xfa) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0xfc) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0xfd) = 0x1010101;
  unaff_RDI[0x21] = (longlong)&DAT_02517118;
  unaff_RDI[0x22] = (longlong)&DAT_02517058;
  *(undefined2 *)(unaff_RDI + 0x26) = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x132) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x136) = 0;
  unaff_RDI[0x27] = (longlong)&DAT_0251b468;
  unaff_RDI[0x28] = (longlong)&DAT_0251b398;
  *(undefined2 *)(unaff_RDI + 0x2f) = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x30] = (longlong)&DAT_0251b400;
  *(undefined4 *)(unaff_RDI + 0x34) = 0;
  unaff_RDI[0x33] = 0;
  unaff_RDI[0x32] = 0;
  unaff_RDI[0x31] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1ed) = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x35] = 0;
  *(undefined2 *)(unaff_RDI + 0x3f) = 0;
  unaff_RDI[0x45] = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x43] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x41] = 0;
  unaff_RDI[0x40] = 0;
  unaff_RDI[0x46] = (longlong)&DAT_0251d288;
  *(undefined4 *)((longlong)unaff_RDI + 0x25f) = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x48] = 0;
  unaff_RDI[0x47] = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x26c) = 0;
  *(undefined4 *)(unaff_RDI + 0x4d) = 0;
  FUN_0098e9aa();
  *(undefined4 *)(unaff_RDI + 0x80) = 0;
  unaff_RDI[0x87] = 0;
  unaff_RDI[0x88] = 0;
  unaff_RDI[0x89] = 0;
  unaff_RDI[0x8a] = 0;
  unaff_RDI[0x8b] = 0;
  unaff_RDI[0x8c] = 0;
  (**(code **)(*unaff_RDI + 0x260))(0,0x2a9f3eff,0x1f);
  plVar3 = *(longlong **)(unaff_RSI + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  (**(code **)(*unaff_RDI + 0x268))();
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
  return;
}


