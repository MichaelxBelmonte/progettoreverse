// Function: FUN_0060a300
// Address: 0060a300
// Size: 971 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0060a300(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  byte bVar6;
  int64_t *this_ptr;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  float fVar15;
  uint in_XMM1_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  int64_t local_98;
  char local_90;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  uVar10 = (**(code **)(*this_ptr + 0x4d8))();
  fVar7 = fVar8;
  cVar4 = (**(code **)(*this_ptr + 0xa08))();
  if (cVar4 != '\0') {
    FUN_01e40eb0();
    bVar6 = 0;
    if ((local_98 != 0) && ((fVar8 != 0.0 || (fVar7 = fVar8, bVar6 = 0, NAN(fVar8))))) {
      fVar7 = (float)-(uint)(fVar15 != 0.0);
      bVar6 = SUB41(fVar7,0) & 1;
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6 != 0) {
      fVar8 = (float)uVar10 + fVar8 + g_02390d00 + g_023b1608 + g_023b5d74;
      (**(code **)(*this_ptr + 0x938))();
      uStack_74 = (uint32_t)((uint64_t)uVar10 >> 0x20);
      uStack_70 = (uint32_t)extraout_XMM0_Qb;
      uStack_6c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      fVar9 = (fVar15 + g_023b5d74) * g_0239011c;
      auVar12._0_4_ = g_023945e0 & (uint)fVar9;
      auVar12._4_4_ = _UNK_023945e4 & (uint)fVar15;
      auVar12._8_4_ = _UNK_023945e8 & in_XMM1_Dd;
      auVar12._12_4_ = _UNK_023945ec & in_XMM1_Dd;
      auVar13._4_12_ = SUB1612(auVar12 | g_023945f0,4);
      auVar13._0_4_ = SUB164(auVar12 | g_023945f0,0) + fVar9;
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar11 = roundss(auVar11,auVar13,0xb);
      auVar14._4_4_ = uStack_74;
      auVar14._0_4_ = fVar8 - fVar7;
      auVar14._8_4_ = uStack_70;
      auVar14._12_4_ = uStack_6c;
      insertps(auVar14,auVar11,0x10);
      if ((int64_t *)this_ptr[0x39] == (int64_t *)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_0006daf0();
        *(void*)(puVar5 + 0x27) = 0;
        puVar5[0x2e] = 0;
        *(void*)(puVar5 + 0x2f) = 0;
        puVar5[0x30] = 0;
        *(void*)(puVar5 + 0x31) = 0;
        puVar5[0x28] = 0;
        puVar5[0x29] = 0;
        *(void*)(puVar5 + 0x2a) = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2c] = 0;
        *(void*)((int64_t)puVar5 + 0x165) = 0;
        *(void*)((int64_t)puVar5 + 0x18c) = 0;
        *(void*)((int64_t)puVar5 + 0x194) = 0;
        *(void*)((int64_t)puVar5 + 0x199) = 0;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 0;
        puVar5[0x38] = 0;
        *puVar5 = &g_02677e10;
        puVar5[2] = &g_026788e8;
        puVar5[0x39] = &g_02678928;
        *(void*)((int64_t)puVar5 + 500) = 0;
        *(void*)(puVar5 + 0x3f) = 0;
        puVar5[0x43] = 0;
        puVar5[0x3c] = 0;
        puVar5[0x3d] = 0;
        puVar5[0x3a] = 0;
        puVar5[0x3b] = 0;
        *(void*)(puVar5 + 0x3e) = 0;
        *(void*)((int64_t)puVar5 + 0x1fc) = 0;
        *(void*)((int64_t)puVar5 + 0x204) = 0;
        *(void*)((int64_t)puVar5 + 0x20c) = 0;
        (*g_02677e28)();
        puVar1 = (void*)this_ptr[0x39];
        if (puVar1 == puVar5) {
          FUN_00d50b20();
        }
        else {
          this_ptr[0x39] = (int64_t)puVar5;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        plVar2 = (int64_t *)this_ptr[0x39];
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar3 = g_02724b78;
        plVar2 = (int64_t *)this_ptr[0x39];
        if (g_02724b78 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_01cef450();
        (**(code **)(*(int64_t *)this_ptr[0x39] + 0x4d0))();
        FUN_01cef4c0();
        FUN_01cef4c0();
        FUN_01cef490();
        (**(code **)(*(int64_t *)this_ptr[0x39] + 0x558))();
        lVar3 = this_ptr[0x3c];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01cef3b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = this_ptr[0x39];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*this_ptr + 0x450))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(int64_t *)this_ptr[0x39] + 0x4d0))();
      }
    }
  }
  return;
}

