// Function: FUN_00c34160
// Address: 00c34160
// Size: 803 bytes
// Class: GNOverloudTapedesk

void FUN_00c34160(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int64_t *plVar4;
  void*puVar5;
  uint64_t uVar6;
  int iVar7;
  void*arg1;
  int64_t lVar8;
  int64_t *this_ptr;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t local_58;
  char local_50;
  uint local_48;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x3c] != 0) {
    iVar2 = *(int *)(this_ptr[0x3c] + 0x18);
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    if (3 < iVar2) {
      fVar9 = (float)(**(code **)(*this_ptr + 0x930))();
      FUN_01e3f820();
      pfVar3 = *(float **)(this_ptr[0x3c] + 0x10);
      fVar1 = *pfVar3;
      if (fVar9 <= fVar1) {
        fVar13 = **(float **)(this_ptr[0x3d] + 0x10);
      }
      else {
        uVar6 = (uint64_t)((iVar7 >> 2) - 1);
        if (pfVar3[uVar6] <= fVar9) {
          fVar13 = *(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + uVar6 * 4);
        }
        else {
          uVar6 = 0;
          while (fVar1 < fVar9) {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            fVar1 = pfVar3[lVar8];
          }
          lVar8 = (int64_t)((uVar6 << 0x20) + -0x100000000) >> 0x1e;
          fVar10 = *(float *)((int64_t)pfVar3 + lVar8);
          fVar13 = *(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + lVar8);
          fVar13 = ((*(float *)(*(int64_t *)(this_ptr[0x3d] + 0x10) + (uVar6 & 0xffffffff) * 4) -
                    fVar13) * (fVar9 - fVar10)) / (fVar1 - fVar10) + fVar13;
        }
      }
      fVar1 = *(float *)(this_ptr + 0x39);
      FUN_01d48370();
      plVar4 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x390))();
      FUN_01cfbee0(g_0239011c,0,0);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d488d0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      fVar10 = (float)((uint)(g_023b5d7c - fVar13) & -(uint)(fVar13 < g_023b5d7c));
      fVar12 = 0.0;
      local_48 = ~-(uint)(fVar13 < g_023b5d7c) & ((uint)(g_023b5d80 + fVar13) ^ g_023945e0) |
                 (uint)fVar10;
      plVar4 = (int64_t *)*arg1;
      fVar9 = (float)FUN_01e3f820();
      fVar10 = fVar10 * g_0239011c;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x370))
                (fVar9 + fVar10,
                 fVar12 + extraout_XMM0_Db + g_02390d00 + *(float *)(this_ptr + 0x39));
      (**(code **)(*(int64_t *)*arg1 + 0x378))(local_48);
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02680400;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(void*)((int64_t)puVar5 + 0x39) = 0;
      *(void*)((int64_t)puVar5 + 0x41) = 0;
      (*g_02680418)();
      FUN_01d38ba0(g_02394244,0);
      FUN_01d38ba0(0,(uint)(fVar11 + fVar1) ^ g_023945e0);
      FUN_01d38ba0(g_0239458c,0);
      FUN_01d38b10();
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      FUN_01d48390();
      FUN_00d50b20();
    }
  }
  return;
}

