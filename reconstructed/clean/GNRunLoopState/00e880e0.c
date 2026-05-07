// Function: FUN_00e880e0
// Address: 00e880e0
// Size: 1213 bytes
// Class: GNRunLoopState
// String references:
//   "GNRunLoopState"
//   "ode.app/"
//   "/Applications/Xc?GNRunLoopWillDispatchEvent"

void FUN_00e880e0(void)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint8_t (*pauVar5) [16];
  int64_t lVar6;
  uint uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int *piVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint64_t local_60;
  
  FUN_00003020();
  if ((g_027890f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027890c0 = g_0238fcc0;
    ram_00000000027890c8 = _UNK_0238fcc8;
    g_027890d0 = g_0238ff10;
    ram_00000000027890d8 = _UNK_0238ff18;
    g_027890e0 = 0x900000008;
    g_027890e8 = 10;
    g_027890ec = 1;
    ___cxa_guard_release();
  }
  if ((g_02789128 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027890f8 = "GNRunLoopState";
    g_02789100 = 0xb;
    g_02789104 = g_027890ec;
    g_02789108 = &g_027890c0;
    g_02789110 = &g_02789060;
    g_02789118 = (uint8_t  [16])0x0;
    ___cxa_guard_release();
  }
  FUN_00d4ff60();
  FUN_00d50c00();
  uVar7 = 0;
  do {
    uVar2 = __dyld_image_count();
    if ((uVar2 <= uVar7) || ((g_02802648 != 0 && (g_02802638 != 0)))) {
      if ((g_02802638 == 0) ||
         (((g_02802648 == 0 || (g_02802668 == 0)) || (g_02802678 == 0)))) {
        FUN_00e82970();
      }
      if (g_02802658 == 0) {
        FUN_00e82970();
      }
      FUN_00d4ffb0();
      return;
    }
    lVar4 = __dyld_get_image_header();
    pauVar5 = (uint8_t (*) [16])__dyld_get_image_name();
    if (((*(int64_t *)*pauVar5 != 0x2f6d65747379532f) &&
        ((*pauVar5)[4] != '/' || *(int *)*pauVar5 != 0x7273752f)) &&
       ((auVar12._8_8_ = 0, auVar12._0_8_ = *(uint64_t *)pauVar5[1],
        auVar12 != _s_ode_app__023e1760 ||
        *pauVar5 != s__Applications_Xc_GNRunLoopWillDi_023e1770._0_16_ &&
        (*(int *)(lVar4 + 0x10) != 0)))) {
      piVar10 = (int *)(lVar4 + 0x20);
      uVar2 = 0;
      do {
        if (((g_02802648 != 0) && (g_02802638 != 0)) && (g_02802678 != 0)) break;
        if (*piVar10 == 0x19) {
          lVar1 = *(int64_t *)(piVar10 + 6);
          lVar6 = __dyld_get_image_vmaddr_slide();
          uVar9 = lVar6 + lVar1;
          if (((uVar9 <= local_60) && (local_60 < *(int64_t *)(piVar10 + 8) + uVar9)) &&
             (piVar10[0x10] != 0)) {
            plVar8 = (int64_t *)(piVar10 + 0x12);
            uVar11 = 0;
            do {
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802648 = lVar6 + lVar1;
                g_02802650 = g_02802648 + plVar8[5] + -1;
                if (g_02802658 != 0) break;
              }
              if (*(int *)((int64_t)plVar8 + 3) == 0x617461 && (int)*plVar8 == 0x61645f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802658 = lVar6 + lVar1;
                g_02802660 = g_02802658 + plVar8[5] + -1;
              }
              uVar11 = uVar11 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar11 < (uint)piVar10[0x10]);
          }
          if (((uVar9 < 0xe880e1) && (FUN_00e880e0 < (uVar9 + *(int64_t *)(piVar10 + 8))))
             && (piVar10[0x10] != 0)) {
            plVar8 = (int64_t *)(piVar10 + 0x12);
            uVar9 = 0;
            do {
              if (*(int *)((int64_t)plVar8 + 3) == 0x747865 && (int)*plVar8 == 0x65745f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802638 = lVar6 + lVar1;
                g_02802640 = g_02802638 + plVar8[5] + -1;
                if ((g_02802668 != 0) && (g_02802678 != 0)) break;
              }
              if ((short)plVar8[1] == 0x67 && *plVar8 == 0x6e69727473635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802668 = lVar6 + lVar1;
                g_02802670 = g_02802668 + plVar8[5] + -1;
                if ((g_02802638 != 0) && (g_02802678 != 0)) break;
              }
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802678 = lVar6 + lVar1;
                g_02802680 = g_02802678 + plVar8[5] + -1;
                if ((g_02802638 != 0) && (g_02802668 != 0)) break;
              }
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar9 < (uint)piVar10[0x10]);
          }
        }
        piVar10 = (int *)((int64_t)piVar10 + (uint64_t)(uint)piVar10[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar4 + 0x10));
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

