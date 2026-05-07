// Function: FUN_00981dd8
// Address: 00981dd8
// Size: 1357 bytes
// Class: Unknown
// String references:
//   "No ASN1 bytes provided"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1Parser.cpp...
//   "virtual void pace::Asn1Parser::Decode(const vector<uint8_t> &, bool)"
//   "Decode: The ASN1 bytes have a bad header or content size"

void FUN_00981dd8(uint64_t param_1,string param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  string sVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  void *pvVar9;
  void*puVar10;
  ulong uVar11;
  ulong uVar12;
  void*puVar13;
  string *psVar14;
  string *psVar15;
  char *pcVar16;
  void*arg1;
  string *this_ptr;
  char *pcVar17;
  void*puVar18;
  uint32_t uVar19;
  uint8_t local_f8 [24];
  byte local_e0 [24];
  int64_t local_c8;
  int64_t *local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  byte local_a0;
  byte local_88;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t uStack_50;
  char *local_48;
  uint local_38;
  uint8_t local_31;
  
  puVar18 = (void*)*arg1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
  local_31 = 0;
  if (*(int *)(arg1 + 1) == (int)puVar18) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar19 = FUN_00928ab0("virtual void pace::Asn1Parser::Decode(const vector<uint8_t> &, bool)",
                          0x50);
    FUN_009c720b(uVar19,uVar6);
    puVar18 = (void*)*arg1;
  }
  this_ptr[0x28] = param_2;
  uVar12 = (ulong)local_f8;
  lVar7 = FUN_0096e0a0(&local_38,*puVar18);
  if (lVar7 == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar19 = FUN_00928ab0("virtual void pace::Asn1Parser::Decode(const vector<uint8_t> &, bool)",
                          0x69);
    FUN_009c720b(uVar19,uVar6);
  }
  psVar15 = (string *)(uint64_t)local_38;
  cVar5 = FUN_00980c70(&local_31);
  sVar3 = this_ptr[0x28];
  puVar13 = (void*)CONCAT71((int7)((uint64_t)this_ptr >> 8),sVar3);
  if (cVar5 == '\0') {
    if (sVar3 != (string)0x0) {
      FUN_009824a2();
      pcVar17 = (char *)((int64_t)&local_58 + 1);
      if ((local_58 & 1) == 0) {
        uVar11 = (ulong)((byte)local_58 >> 1);
        pcVar16 = pcVar17;
      }
      else {
        uVar11 = (ulong)uStack_50;
        pcVar16 = local_48;
      }
      puVar8 = (uint64_t *)std::string::insert(uVar11,pcVar16,uVar12);
      local_60 = puVar8[2];
      local_70 = *puVar8;
      local_68 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      FUN_009824a2();
      if ((local_58 & 1) == 0) {
        uVar11 = (ulong)((byte)local_58 >> 1);
      }
      else {
        uVar11 = (ulong)uStack_50;
        pcVar17 = local_48;
      }
      puVar8 = (uint64_t *)std::string::insert(uVar11,pcVar17,uVar12);
      local_a8 = puVar8[2];
      local_b8 = *puVar8;
      local_b0 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar13 = puVar18;
      FUN_0098242c(puVar18,((int)lVar7 - (int)puVar18) + local_38);
      if ((local_b8 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_70 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(puVar13);
      }
    }
    uVar12 = (ulong)puVar13;
    pvVar9 = operator_new(uVar12);
    FUN_00981a28();
    puVar10 = operator_new(uVar12);
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = &g_02520fe8;
    puVar10[3] = pvVar9;
    *(void **)(this_ptr + 8) = pvVar9;
    plVar4 = *(int64_t **)(this_ptr + 0x10);
    *(void**)(this_ptr + 0x10) = puVar10;
    psVar14 = this_ptr;
    if (plVar4 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar4 = *(int64_t **)(this_ptr + 8);
    *(void*)(plVar4 + 1) = *puVar18;
    if (local_38 != 0) {
      (**(code **)(*plVar4 + 0x58))();
    }
  }
  else {
    if (sVar3 != (string)0x0) {
      FUN_009824a2();
      pcVar17 = (char *)((int64_t)&local_58 + 1);
      if ((local_58 & 1) == 0) {
        uVar11 = (ulong)((byte)local_58 >> 1);
        pcVar16 = pcVar17;
      }
      else {
        uVar11 = (ulong)uStack_50;
        pcVar16 = local_48;
      }
      puVar8 = (uint64_t *)std::string::insert(uVar11,pcVar16,uVar12);
      local_60 = puVar8[2];
      local_70 = *puVar8;
      local_68 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      FUN_009824a2();
      if ((local_58 & 1) == 0) {
        uVar11 = (ulong)((byte)local_58 >> 1);
      }
      else {
        uVar11 = (ulong)uStack_50;
        pcVar17 = local_48;
      }
      puVar8 = (uint64_t *)std::string::insert(uVar11,pcVar17,uVar12);
      local_a8 = puVar8[2];
      local_b8 = *puVar8;
      local_b0 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      psVar15 = (string *)(uint64_t)(uint)((int)lVar7 - (int)puVar18);
      puVar13 = puVar18;
      FUN_0098242c();
      if ((local_b8 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_70 & 1) != 0) {
        operator_delete(puVar13);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(puVar13);
      }
    }
    uVar12 = (ulong)puVar13;
    pvVar9 = operator_new(uVar12);
    FUN_0098106a();
    puVar10 = operator_new(uVar12);
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = &g_02520f98;
    puVar10[3] = pvVar9;
    *(void **)(this_ptr + 8) = pvVar9;
    plVar4 = *(int64_t **)(this_ptr + 0x10);
    *(void**)(this_ptr + 0x10) = puVar10;
    psVar14 = this_ptr;
    if (plVar4 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar2 = *(int64_t *)(this_ptr + 8);
    psVar14 = (string *)CONCAT71((int7)((uint64_t)psVar14 >> 8),*puVar18);
    *(void*)(lVar2 + 8) = *puVar18;
    if (local_38 != 0) {
      local_c0 = *(int64_t **)(this_ptr + 0x10);
      if (local_c0 != (int64_t *)0x0) {
        LOCK();
        local_c0[1] = local_c0[1] + 1;
        UNLOCK();
      }
      local_c8 = lVar2;
      std::string::string(psVar14,psVar15);
      psVar14 = (string *)(uint64_t)local_38;
      (**(code **)(*(int64_t *)this_ptr + 0x30))(psVar14,lVar7,local_f8,local_e0);
      if ((local_e0[0] & 1) != 0) {
        operator_delete(psVar14);
      }
      if (local_c0 != (int64_t *)0x0) {
        LOCK();
        plVar4 = local_c0 + 1;
        lVar7 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*local_c0 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  if ((local_58 & 1) != 0) {
    operator_delete(psVar14);
  }
  return;
}

