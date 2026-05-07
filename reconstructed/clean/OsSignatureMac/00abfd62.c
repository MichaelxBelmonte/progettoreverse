// Function: FUN_00abfd62
// Address: 00abfd62
// Size: 2537 bytes
// Class: OsSignatureMac
// String references:
//   "Contents"
//   "Info.plist"
//   "Resources"
//   ".framework"
//   "Versions"
//   "Info-macos.plist"

void FUN_00abfd62(uint8_t (*param_1) [16],void*param_2,size_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  string *this;
  string *psVar8;
  uint64_t *this_ptr;
  bool bVar9;
  uint64_t uVar10;
  byte local_130;
  byte local_118;
  byte local_100;
  byte local_e8;
  byte local_d0;
  byte local_b0;
  uint8_t local_af [7];
  string *local_a8;
  void*local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  byte local_78;
  uint32_t local_60;
  string *local_58;
  int64_t local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  
  if ((g_028a0ae8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((g_028a0b08 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((g_028a0b28 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((g_028a0b48 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((g_028a0b68 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((g_028a0b88 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  this_ptr[1] = 0;
  *this_ptr = 0;
  if (param_2 != (void*)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (uint8_t (*) [16])0x0) {
    plVar3 = *(int64_t **)(*param_1 + 8);
    *param_1 = (uint8_t  [16])0x0;
    if (plVar3 != (int64_t *)0x0) {
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
  }
  FUN_00ac9650();
  FUN_00ac86a0();
  this = (string *)0x0;
  FUN_00ac67c0();
  if ((local_78 & 1) != 0) {
    operator_delete(this);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(this);
  }
  FUN_00ac92d0();
  if ((uint)local_48 == 3) goto LAB_00ac0525;
  FUN_00aca780();
  FUN_00aca780();
  psVar8 = (string *)0x0;
  FUN_00ac92d0();
  if (1 < (uint)local_48) {
    psVar8 = (string *)0x0;
    FUN_00ac92d0();
    if ((uint)local_48 == 3) {
      FUN_00acaae0();
      std::string::string(this,psVar8);
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      uVar5 = local_60;
      this = (string *)(uint64_t)g_028a0ad0;
      psVar8 = (string *)(uint64_t)(g_028a0ad0 >> 1);
      if ((g_028a0ad0 & 1) != 0) {
        psVar8 = g_028a0ad8;
      }
      if ((local_60 & 1) == 0) {
        local_58 = (string *)(uint64_t)((byte)local_60 >> 1);
      }
      if (psVar8 == local_58) {
        if ((local_60 & 1) == 0) {
          local_50 = (int64_t)&local_60 + 1;
        }
        if ((g_028a0ad0 & 1) == 0) {
          bVar9 = true;
          if (psVar8 != (string *)0x0) {
            this = (string *)0x0;
            psVar8 = (string *)&g_028a0ad0;
            do {
              if (this[0x28a0ad1] != this[local_50]) goto LAB_00abffb1;
              this = this + 1;
            } while ((string *)(uint64_t)(g_028a0ad0 >> 1) != this);
          }
        }
        else if (psVar8 == (string *)0x0) {
          bVar9 = true;
        }
        else {
          iVar7 = _memcmp(this,psVar8,param_3);
          bVar9 = iVar7 == 0;
        }
      }
      else {
LAB_00abffb1:
        bVar9 = false;
      }
      if ((uVar5 & 1) != 0) {
        operator_delete(this);
      }
      if (bVar9) {
        std::string::string(this,psVar8);
        std::string::string(this,psVar8);
        FUN_00ac9740();
        if ((local_60 & 1) != 0) {
          operator_delete(this);
        }
        psVar8 = (string *)0x0;
        FUN_00ac92d0();
        if (1 < local_60) {
          psVar8 = (string *)0x0;
          FUN_00ac92d0();
          if (local_60 != 3) {
            FUN_00aca780();
            cVar6 = FUN_00abf8bb();
            if (cVar6 != '\0') {
              operator_new((ulong)this);
              std::string::string(this,psVar8);
              psVar8 = (string *)0x0;
              FUN_00ac0c90();
              uVar4 = *this_ptr;
              plVar3 = (int64_t *)this_ptr[1];
              *(void*)this_ptr = (uint32_t)local_98;
              *(void*)((int64_t)this_ptr + 4) = local_98._4_4_;
              *(void*)(this_ptr + 1) = (uint32_t)uStack_90;
              *(void*)((int64_t)this_ptr + 0xc) = uStack_90._4_4_;
              local_98 = uVar4;
              uStack_90 = plVar3;
              if (plVar3 != (int64_t *)0x0) {
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
            }
            if ((local_60 & 1) != 0) {
              operator_delete(this);
            }
          }
        }
        if ((local_48 & 1) != 0) {
          operator_delete(this);
        }
      }
    }
  }
  if (*this_ptr == 0) {
    std::string::string(this,psVar8);
    std::string::string(this,psVar8);
    FUN_00ac9740();
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
    std::string::string(this,psVar8);
    std::string::string(this,psVar8);
    FUN_00ac9740();
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
    std::string::string(this,psVar8);
    std::string::string(this,psVar8);
    FUN_00ac9740();
    if ((local_48 & 1) != 0) {
      operator_delete(this);
    }
    FUN_00ac92d0();
    if ((uint)local_48 < 2) {
LAB_00ac01e4:
      FUN_00ac92d0();
      if (1 < (uint)local_48) {
        psVar8 = (string *)0x0;
        FUN_00ac92d0();
        if ((uint)local_48 != 3) goto LAB_00ac021c;
      }
    }
    else {
      psVar8 = (string *)0x0;
      FUN_00ac92d0();
      if ((uint)local_48 == 3) goto LAB_00ac01e4;
LAB_00ac021c:
      FUN_00aca780();
      FUN_00acaae0();
      std::string::string(this,psVar8);
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      this = (string *)(uint64_t)g_028a0b10;
      psVar8 = (string *)(uint64_t)(g_028a0b10 >> 1);
      if ((g_028a0b10 & 1) != 0) {
        psVar8 = g_028a0b18;
      }
      if ((local_b0 & 1) == 0) {
        local_a8 = (string *)(uint64_t)(local_b0 >> 1);
      }
      if (psVar8 == local_a8) {
        if ((local_b0 & 1) == 0) {
          local_a0 = local_af;
        }
        if ((g_028a0b10 & 1) == 0) {
          bVar9 = true;
          if (psVar8 != (string *)0x0) {
            this = (string *)0x0;
            psVar8 = (string *)&g_028a0b10;
            do {
              if (this[0x28a0b11] != *(string *)(local_a0 + (int64_t)this)) goto LAB_00ac0307;
              this = this + 1;
            } while ((string *)(uint64_t)(g_028a0b10 >> 1) != this);
          }
        }
        else if (psVar8 == (string *)0x0) {
          bVar9 = true;
        }
        else {
          iVar7 = _memcmp(this,psVar8,param_3);
          bVar9 = iVar7 == 0;
        }
      }
      else {
LAB_00ac0307:
        bVar9 = false;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(this);
      }
      if (bVar9) {
        FUN_00aca780();
        FUN_00aca130();
        std::string::string(this,psVar8);
        if ((local_48 & 1) != 0) {
          operator_delete(this);
        }
        psVar8 = (string *)&local_48;
        std::locale::locale((locale *)this);
        cVar6 = FUN_009f1787();
        std::locale::~locale((locale *)this);
        if (cVar6 != '\0') {
          operator_new((ulong)this);
          std::string::string(this,psVar8);
          psVar8 = (string *)0x0;
          FUN_00ac0c90();
          uVar4 = *this_ptr;
          plVar3 = (int64_t *)this_ptr[1];
          *(uint *)this_ptr = (uint)local_48;
          *(void*)((int64_t)this_ptr + 4) = local_48._4_4_;
          *(void*)(this_ptr + 1) = (uint32_t)uStack_40;
          *(void*)((int64_t)this_ptr + 0xc) = uStack_40._4_4_;
          local_48 = uVar4;
          uStack_40 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
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
          if (param_2 != (void*)0x0) {
            *param_2 = 1;
          }
          if (param_1 != (uint8_t (*) [16])0x0) {
            operator_new((ulong)this);
            uVar10 = std::string::string(this,psVar8);
            FUN_00ac0c90(uVar10,0);
            uVar4 = *(uint64_t *)*param_1;
            plVar3 = *(int64_t **)(*param_1 + 8);
            *(uint *)*param_1 = (uint)local_48;
            *(void*)(*param_1 + 4) = local_48._4_4_;
            *(void*)(*param_1 + 8) = (uint32_t)uStack_40;
            *(void*)(*param_1 + 0xc) = uStack_40._4_4_;
            local_48 = uVar4;
            uStack_40 = plVar3;
            if (plVar3 != (int64_t *)0x0) {
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
          }
        }
        if ((local_130 & 1) != 0) {
          operator_delete(this);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(this);
        }
      }
      if ((local_100 & 1) != 0) {
        operator_delete(this);
      }
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(this);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(this);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(this);
    }
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(this);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(this);
  }
LAB_00ac0525:
  if ((local_118 & 1) != 0) {
    operator_delete(this);
  }
  return;
}

