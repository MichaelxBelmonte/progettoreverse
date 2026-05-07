// ===================================================================
// GNGraphicsContextState — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (2):
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


// ============================================================
// 01d4a550
// ============================================================
// Function: FUN_01d4a550
// Address: 01d4a550
// Size: 1285 bytes
// Class: GNGraphicsContextState
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4a550(float param_1,float param_2,float param_3,float param_4)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  void*puVar6;
  code *pcVar7;
  uint64_t uVar8;
  float *in_RDX;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t *in_R8;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  uint32_t uVar15;
  float fVar16;
  float in_XMM4_Da;
  
  if ((param_1 != g_02390124) || (NAN(param_1) || NAN(g_02390124))) {
    fVar14 = *(float *)(this_ptr[8] + 0xc);
    if ((g_028b8158 == (void*)0x0) || (g_028b8161 == '\0')) {
      FUN_00e8cb50();
      if (g_028b8158 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_025683c0;
        (*g_025683d8)();
        FUN_00c92170();
        FUN_00c92160();
        if (g_028b8158 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar12 = g_028b8158 != (void*)0x0;
          g_028b8158 = puVar6;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
        if (g_028b8160 == '\0') {
          g_028b8160 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        g_028b8161 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b8161 = '\x01';
        FUN_00e8cb70();
      }
    }
    uVar5 = *(uint *)(*in_R8 + 0xc);
    iVar10 = *(int *)(g_028b8158 + 3);
    iVar11 = iVar10 + 3;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    if (iVar11 >> 2 < (int)uVar5) {
      FUN_00c8e340(iVar11 >> 2,0);
    }
    lVar1 = g_028b8158[2];
    if (0 < (int)uVar5) {
      iVar10 = ((int)(fVar14 * g_02394220) & 0xffU) * 0x10000;
      pcVar7 = this_ptr[3];
      if (pcVar7 == 0x0) {
        lVar9 = *(int64_t *)(*in_R8 + 0x10);
        uVar8 = 0;
        do {
          uVar4 = *(uint *)(*(int64_t *)(lVar9 + uVar8 * 8) + 0xc);
          *(uint *)(lVar1 + uVar8 * 4) =
               uVar4 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00 |
               (uVar4 >> 0x18) * iVar10 & 0xff000000;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      else {
        lVar9 = 0;
        while( true ) {
          uVar4 = *(uint *)(*(int64_t *)(*(int64_t *)(*in_R8 + 0x10) + lVar9 * 8) + 0xc);
          if (pcVar7 != 0x0) {
            uVar4 = (*pcVar7)();
          }
          *(uint *)(lVar1 + lVar9 * 4) =
               uVar4 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00 |
               (uVar4 >> 0x18) * iVar10 & 0xff000000;
          if ((uint64_t)uVar5 - 1 == lVar9) break;
          pcVar7 = this_ptr[3];
          lVar9 = lVar9 + 1;
        }
      }
    }
    fVar14 = *in_RDX;
    fVar16 = in_RDX[2] + fVar14 + g_02390d00;
    fVar13 = (float)(**(code **)(*this_ptr + 0x428))();
    uVar5 = FUN_00e7d780(fVar13 * (float)((int)fVar14 + -2));
    fVar13 = (float)(**(code **)(*this_ptr + 0x428))();
    iVar10 = FUN_00e7d780(fVar13 * (float)((int)(fVar16 - fVar14) + 4));
    fVar14 = (float)(**(code **)(*this_ptr + 0x428))();
    FUN_00e7d780(fVar14 * param_3);
    fVar14 = (float)(**(code **)(*this_ptr + 0x428))();
    FUN_00e7d780(fVar14 * param_4);
    fVar14 = 0.0;
    if ((0.0 <= in_XMM4_Da) && (fVar14 = in_XMM4_Da, g_02390124 < in_XMM4_Da)) {
      fVar14 = g_02390124;
    }
    uVar5 = (int)uVar5 >> 0x1f & uVar5;
    iVar11 = iVar10 + uVar5;
    if (iVar11 != 0 && SCARRY4(iVar10,uVar5) == iVar11 < 0) {
      if (0x200 < iVar11) {
        do {
          uVar15 = (**(code **)(*this_ptr + 0x428))();
          FUN_01d494d0(param_1,param_2,uVar15,fVar14);
          bVar2 = 0x400 < iVar11;
          iVar11 = iVar11 + -0x200;
        } while (bVar2);
      }
      uVar15 = (**(code **)(*this_ptr + 0x428))();
      FUN_01d494d0(param_1,param_2,uVar15,fVar14);
    }
  }
  else {
    lVar1 = *(int64_t *)
             (*(int64_t *)(*in_R8 + 0x10) +
             (int64_t)(int)param_2 * (int64_t)*(int *)(*in_R8 + 0xc) * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x3a0))();
  }
  return;
}



// ============================================================
// 01d4b0a0
// ============================================================
// Function: FUN_01d4b0a0
// Address: 01d4b0a0
// Size: 915 bytes
// Class: GNGraphicsContextState
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4b0a0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028b8168 == (int64_t *)0x0) || (g_028b8171 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8168 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b8168 == plVar3) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar5 = g_028b8168 != (int64_t *)0x0;
        g_028b8168 = plVar3;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b8170 == '\0') {
        g_028b8170 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028b8171 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8171 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (g_028b8168 != (int64_t *)0x0) {
    local_58 = '\0';
    local_60 = 0;
    lVar4 = g_028b8168[2];
    local_48 = 0;
    if (0 < *(int *)(lVar4 + 0xc)) {
      do {
        local_60 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)local_48 * 8);
        lVar2 = FUN_00dd6dc0();
        if (lVar2 == this_ptr) {
          FUN_01d4af20();
          if (local_40 == 0) {
            lVar4 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            lVar4 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
          goto LAB_01d4b140;
        }
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(lVar4 + 0xc));
    }
    bVar1 = false;
    lVar4 = 0;
LAB_01d4b140:
    if (lVar4 != 0) goto LAB_01d4b337;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d4b6d0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_01d4b337:
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d533c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d4b780();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d4b830
// ============================================================
// Function: FUN_01d4b830
// Address: 01d4b830
// Size: 595 bytes
// Class: GNGraphicsContextState
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4b830(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t local_90;
  int64_t local_88 [2];
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (g_028b8168 != 0) {
    FUN_00ca1380();
    plVar2 = &local_40;
    if ((char)local_88[0] != '\0') {
      plVar2 = local_88;
    }
    local_40 = CONCAT71(local_40._1_7_,(char)local_88[0]);
    *(void*)plVar2 = 0;
    if (((char)local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 == '\0') {
      if (local_90 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_90 == 0) {
      return;
    }
    local_88[0]._0_1_ = 0;
    local_70 = 0;
    local_78 = 0;
    if (0 < *(int *)(local_90 + 0xc)) {
      iVar3 = 0;
      do {
        FUN_01d533c0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01d4aff0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00dd6dc0();
          _CGImageRelease();
          FUN_01d533c0();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00ca13a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar3);
      } while (iVar3 < *(int *)(local_90 + 0xc));
    }
    FUN_01d4e2a0();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d4bfe0
// ============================================================
// Function: FUN_01d4bfe0
// Address: 01d4bfe0
// Size: 2086 bytes
// Class: GNGraphicsContextState
// String references:
//   "GNGraphicsContextState"
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4bfe0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02680ed8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4c8c0();
    FUN_00e87980();
  }
  FUN_01d4ca50();
  FUN_01d4cd10();
  FUN_01d4cfd0();
  FUN_01d4d290();
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4d550();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4d6e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4d870();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4da00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4dc60();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4dec0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f0033 == '\0') {
    FUN_01d4e050();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01d4dc60
// ============================================================
// Function: FUN_01d4dc60
// Address: 01d4dc60
// Size: 560 bytes
// Class: GNGraphicsContextState
// String references:
//   "GNGraphicsContextState"
//   "GNLineJoin"
//   "_lineJoin"
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void* FUN_01d4dc60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f0340 = "_lineJoin";
      g_027f0348 = &g_027eff78;
      g_027f0350 = 0;
      g_027f0358 = 0x6500;
      g_027f0360 = "GNLineJoin";
      g_027f0368 = &g_027f03c8;
      g_027f0370 = 0;
      ram_00000000027f0378 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f0340;
}



// ============================================================
// 01d4da00
// ============================================================
// Function: FUN_01d4da00
// Address: 01d4da00
// Size: 560 bytes
// Class: GNGraphicsContextState
// String references:
//   "GNGraphicsContextState"
//   "GNLineCap"
//   "_lineCap"
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void* FUN_01d4da00(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f0288 = "_lineCap";
      g_027f0290 = &g_027eff78;
      g_027f0298 = 0;
      g_027f02a0 = 0x6500;
      g_027f02a8 = "GNLineCap";
      g_027f02b0 = &g_027f0308;
      g_027f02b8 = 0;
      ram_00000000027f02c0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f0288;
}

