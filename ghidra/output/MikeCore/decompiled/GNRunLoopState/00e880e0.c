// Function: FUN_00e880e0
// Address: 00e880e0
// Size: 1213 bytes
// Class: GNRunLoopState
// String references:
//   "GNRunLoopState"
//   "ode.app/"
//   "/Applications/Xc?GNRunLoopWillDispatchEvent"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e880e0(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  ulonglong local_60;
  
  FUN_00003020();
  if ((DAT_027890f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027890c0 = _DAT_0238fcc0;
    uRam00000000027890c8 = _UNK_0238fcc8;
    _DAT_027890d0 = _DAT_0238ff10;
    uRam00000000027890d8 = _UNK_0238ff18;
    _DAT_027890e0 = 0x900000008;
    _DAT_027890e8 = 10;
    DAT_027890ec = 1;
    ___cxa_guard_release();
  }
  if ((DAT_02789128 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027890f8 = "GNRunLoopState";
    _DAT_02789100 = 0xb;
    DAT_02789104 = DAT_027890ec;
    _DAT_02789108 = &DAT_027890c0;
    _DAT_02789110 = &DAT_02789060;
    _DAT_02789118 = (undefined1  [16])0x0;
    ___cxa_guard_release();
  }
  FUN_00d4ff60();
  FUN_00d50c00();
  uVar7 = 0;
  do {
    uVar2 = __dyld_image_count();
    if ((uVar2 <= uVar7) || ((DAT_02802648 != 0 && (DAT_02802638 != 0)))) {
      if ((DAT_02802638 == 0) ||
         (((DAT_02802648 == 0 || (DAT_02802668 == 0)) || (DAT_02802678 == 0)))) {
        FUN_00e82970();
      }
      if (DAT_02802658 == 0) {
        FUN_00e82970();
      }
      FUN_00d4ffb0();
      return;
    }
    lVar4 = __dyld_get_image_header();
    pauVar5 = (undefined1 (*) [16])__dyld_get_image_name();
    if (((*(longlong *)*pauVar5 != 0x2f6d65747379532f) &&
        ((*pauVar5)[4] != '/' || *(int *)*pauVar5 != 0x7273752f)) &&
       ((auVar12._8_8_ = 0, auVar12._0_8_ = *(ulonglong *)pauVar5[1],
        auVar12 != _s_ode_app__023e1760 ||
        *pauVar5 != s__Applications_Xc_GNRunLoopWillDi_023e1770._0_16_ &&
        (*(int *)(lVar4 + 0x10) != 0)))) {
      piVar10 = (int *)(lVar4 + 0x20);
      uVar2 = 0;
      do {
        if (((DAT_02802648 != 0) && (DAT_02802638 != 0)) && (DAT_02802678 != 0)) break;
        if (*piVar10 == 0x19) {
          lVar1 = *(longlong *)(piVar10 + 6);
          lVar6 = __dyld_get_image_vmaddr_slide();
          uVar9 = lVar6 + lVar1;
          if (((uVar9 <= local_60) && (local_60 < *(longlong *)(piVar10 + 8) + uVar9)) &&
             (piVar10[0x10] != 0)) {
            plVar8 = (longlong *)(piVar10 + 0x12);
            uVar11 = 0;
            do {
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802648 = lVar6 + lVar1;
                DAT_02802650 = DAT_02802648 + plVar8[5] + -1;
                if (DAT_02802658 != 0) break;
              }
              if (*(int *)((longlong)plVar8 + 3) == 0x617461 && (int)*plVar8 == 0x61645f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802658 = lVar6 + lVar1;
                DAT_02802660 = DAT_02802658 + plVar8[5] + -1;
              }
              uVar11 = uVar11 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar11 < (uint)piVar10[0x10]);
          }
          if (((uVar9 < 0xe880e1) && (FUN_00e880e0 < (code *)(uVar9 + *(longlong *)(piVar10 + 8))))
             && (piVar10[0x10] != 0)) {
            plVar8 = (longlong *)(piVar10 + 0x12);
            uVar9 = 0;
            do {
              if (*(int *)((longlong)plVar8 + 3) == 0x747865 && (int)*plVar8 == 0x65745f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802638 = lVar6 + lVar1;
                DAT_02802640 = DAT_02802638 + plVar8[5] + -1;
                if ((DAT_02802668 != 0) && (DAT_02802678 != 0)) break;
              }
              if ((short)plVar8[1] == 0x67 && *plVar8 == 0x6e69727473635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802668 = lVar6 + lVar1;
                DAT_02802670 = DAT_02802668 + plVar8[5] + -1;
                if ((DAT_02802638 != 0) && (DAT_02802678 != 0)) break;
              }
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802678 = lVar6 + lVar1;
                DAT_02802680 = DAT_02802678 + plVar8[5] + -1;
                if ((DAT_02802638 != 0) && (DAT_02802668 != 0)) break;
              }
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar9 < (uint)piVar10[0x10]);
          }
        }
        piVar10 = (int *)((longlong)piVar10 + (ulonglong)(uint)piVar10[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar4 + 0x10));
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


