// Reconstructed implementation of OsSignatureMac
// From MikeCore binary — reverse-engineered pseudocode

#include "OsSignatureMac.h"

// ============================================================
// @00abfd62 — 2537 bytes
// str: ""Contents""
// str: ""Info.plist""
// str: ""Resources""
// str: "".framework""
// str: ""Versions""
// ============================================================

void FUN_00abfd62(undefined1 (*param_1) [16],undefined1 *param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  string *this;
  string *psVar8;
  ulonglong *unaff_RDI;
  bool bVar9;
  undefined8 uVar10;
  byte local_130;
  byte local_118;
  byte local_100;
  byte local_e8;
  byte local_d0;
  byte local_b0;
  undefined1 local_af [7];
  string *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  byte local_78;
  undefined4 local_60;
  string *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((DAT_028a0ae8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((DAT_028a0b08 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((DAT_028a0b28 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((DAT_028a0b48 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((DAT_028a0b68 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  if ((DAT_028a0b88 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    uVar10 = FUN_00abfcb8();
    ___cxa_atexit(uVar10,0);
    ___cxa_guard_release();
  }
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (undefined1 (*) [16])0x0) {
    plVar3 = *(longlong **)(*param_1 + 8);
    *param_1 = (undefined1  [16])0x0;
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
      this = (string *)(ulonglong)DAT_028a0ad0;
      psVar8 = (string *)(ulonglong)(DAT_028a0ad0 >> 1);
      if ((DAT_028a0ad0 & 1) != 0) {
        psVar8 = DAT_028a0ad8;
      }
      if ((local_60 & 1) == 0) {
        local_58 = (string *)(ulonglong)((byte)local_60 >> 1);
      }
      if (psVar8 == local_58) {
        if ((local_60 & 1) == 0) {
          local_50 = (longlong)&local_60 + 1;
        }
        if ((DAT_028a0ad0 & 1) == 0) {
          bVar9 = true;
          if (psVar8 != (string *)0x0) {
            this = (string *)0x0;
            psVar8 = (string *)&DAT_028a0ad0;
            do {
              if (this[0x28a0ad1] != this[local_50]) goto LAB_00abffb1;
              this = this + 1;
            } while ((string *)(ulonglong)(DAT_028a0ad0 >> 1) != this);
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
              uVar4 = *unaff_RDI;
              plVar3 = (longlong *)unaff_RDI[1];
              *(undefined4 *)unaff_RDI = (undefined4)local_98;
              *(undefined4 *)((longlong)unaff_RDI + 4) = local_98._4_4_;
              *(undefined4 *)(unaff_RDI + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_90._4_4_;
              local_98 = uVar4;
              uStack_90 = plVar3;
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
  if (*unaff_RDI == 0) {
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
      this = (string *)(ulonglong)DAT_028a0b10;
      psVar8 = (string *)(ulonglong)(DAT_028a0b10 >> 1);
      if ((DAT_028a0b10 & 1) != 0) {
        psVar8 = DAT_028a0b18;
      }
      if ((local_b0 & 1) == 0) {
        local_a8 = (string *)(ulonglong)(local_b0 >> 1);
      }
      if (psVar8 == local_a8) {
        if ((local_b0 & 1) == 0) {
          local_a0 = local_af;
        }
        if ((DAT_028a0b10 & 1) == 0) {
          bVar9 = true;
          if (psVar8 != (string *)0x0) {
            this = (string *)0x0;
            psVar8 = (string *)&DAT_028a0b10;
            do {
              if (this[0x28a0b11] != *(string *)(local_a0 + (longlong)this)) goto LAB_00ac0307;
              this = this + 1;
            } while ((string *)(ulonglong)(DAT_028a0b10 >> 1) != this);
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
          uVar4 = *unaff_RDI;
          plVar3 = (longlong *)unaff_RDI[1];
          *(uint *)unaff_RDI = (uint)local_48;
          *(undefined4 *)((longlong)unaff_RDI + 4) = local_48._4_4_;
          *(undefined4 *)(unaff_RDI + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_40._4_4_;
          local_48 = uVar4;
          uStack_40 = plVar3;
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
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          if (param_1 != (undefined1 (*) [16])0x0) {
            operator_new((ulong)this);
            uVar10 = std::string::string(this,psVar8);
            FUN_00ac0c90(uVar10,0);
            uVar4 = *(ulonglong *)*param_1;
            plVar3 = *(longlong **)(*param_1 + 8);
            *(uint *)*param_1 = (uint)local_48;
            *(undefined4 *)(*param_1 + 4) = local_48._4_4_;
            *(undefined4 *)(*param_1 + 8) = (undefined4)uStack_40;
            *(undefined4 *)(*param_1 + 0xc) = uStack_40._4_4_;
            local_48 = uVar4;
            uStack_40 = plVar3;
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




// ============================================================
// @00ab5284 — 2253 bytes
// str: "", ""
// str: ""issuerId=""
// str: ""modDate=""
// str: ""uuid=""
// str: ""selfRelation=""
// ============================================================

void FUN_00ab5284(void *param_1)

{
  byte local_40;
  
  FUN_009ad920(param_1,0xd);
  FUN_009ad920();
  FUN_00ab0fc0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_008d3120();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_008d3120();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0091dc38();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0088d900();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00ab1160();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00ab1160();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00ab1160();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00ab1160();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00ab1160();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  return;
}




// ============================================================
// @00ab7374 — 2253 bytes
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac"
// str: ""Could not allocate a dictionary with the architecture attribute.""
// str: ""virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool,"
// str: ""Result code from SecStaticCodeCreateWithPathAndAttributes: %ld""
// str: ""Result code from SecStaticCodeCreateWithPath: %ld""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ab7929) */
/* WARNING: Removing unreachable block (ram,0x00ab796c) */
/* WARNING: Removing unreachable block (ram,0x00ab79db) */
/* WARNING: Removing unreachable block (ram,0x00ab7a09) */
/* WARNING: Removing unreachable block (ram,0x00ab7a0d) */
/* WARNING: Removing unreachable block (ram,0x00ab7a10) */

ulonglong FUN_00ab7374(string *param_1,string *param_2,undefined4 ****param_3,undefined4 ****param_4
                      )

{
  undefined4 ***pppuVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 ****ppppuVar6;
  ulong uVar7;
  undefined *puVar8;
  string *this;
  undefined4 ****ppppuVar9;
  string *psVar10;
  undefined4 ****ppppuVar11;
  longlong *unaff_RDI;
  undefined4 ****ppppuVar12;
  ulonglong uVar13;
  byte local_158;
  undefined *local_130;
  byte local_110;
  byte local_f8;
  uint local_e0 [6];
  undefined *local_c8;
  undefined8 local_c0;
  undefined4 ***local_b8;
  ulonglong local_b0;
  undefined *local_a8;
  longlong local_a0;
  undefined4 ***local_98;
  undefined4 **local_90;
  code *local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 ***local_78;
  undefined4 local_6c;
  undefined *local_68;
  longlong local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 **local_48;
  int local_34;
  
  local_6c = SUB84(param_1,0);
  local_34 = 0;
  if (param_3 != (undefined4 ****)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  psVar10 = param_2;
  local_b8 = (undefined4 ***)param_3;
  if (param_4 != (undefined4 ****)0x0) {
    FUN_0097ffec();
    param_4[2] = (undefined4 ***)0x0;
    *param_4 = (undefined4 ***)(param_4 + 1);
    param_4[1] = (undefined4 ***)0x0;
  }
  FUN_00ab6db8();
  std::string::string(param_1,psVar10);
  FUN_00ab6e4a();
  std::string::string(param_1,psVar10);
  local_c0 = FUN_00abdd2b();
  local_c8 = &DAT_025261a8;
  if ((local_110 & 1) != 0) {
    operator_delete(param_1);
  }
  uVar7 = (ulong)param_1;
  local_7c = FUN_00ac13fc();
  local_78 = (undefined4 ***)0x0;
  if (param_4 == (undefined4 ****)0x0) {
    local_78 = operator_new(uVar7);
    local_78[2] = (undefined4 **)0x0;
    local_78[1] = (undefined4 **)0x0;
    *local_78 = (undefined4 **)(local_78 + 1);
    local_68 = (undefined *)0x0;
    FUN_0098003e();
    param_4 = (undefined4 ****)local_78;
  }
  ppppuVar11 = param_4;
  (**(code **)(*unaff_RDI + 0x38))();
  if (param_4[2] == (undefined4 ***)0x0) {
    FUN_0098003e();
    uVar13 = 0;
  }
  else {
    cVar2 = FUN_00abe6af();
    if (cVar2 == '\0') {
      local_68 = &DAT_0252af40;
      local_58 = &DAT_0252aff0;
      local_50 = 0;
      pppuVar1 = *param_4;
      local_60 = 0;
      local_34 = _SecStaticCodeCreateWithPath();
      *(int *)((longlong)pppuVar1 + 0x3c) = local_34;
      if (local_34 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        local_98 = (undefined4 ***)&local_34;
        local_90 = (undefined4 **)FUN_009cac80;
        local_88 = FUN_009cefa0;
        FUN_00983230();
        FUN_00928ab0("virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool, bool *, pace::eden::DsigResultMap_T *)"
                     ,0x2ff);
        FUN_009bd5cb();
      }
      local_48 = (undefined4 **)((ulonglong)local_48 & 0xffffffffffffff00);
      uVar4 = FUN_00ab7e04(&local_48,(byte)local_6c,pppuVar1 + 7);
      if (((undefined4 ****)local_b8 != (undefined4 ****)0x0) && ((byte)local_48 != 0)) {
        *(undefined1 *)local_b8 = 1;
      }
      ppppuVar11 = (undefined4 ****)local_b8;
      if ((byte)uVar4 != 0) {
        if (local_7c == 1) {
          FUN_00ac1416(local_e0,0,0,0);
        }
        else {
          local_e0[0] = 7;
        }
        local_98 = (undefined4 ***)local_e0;
        ppppuVar11 = &local_98;
        FUN_00abbed4(ppppuVar11,&DAT_023d3e9b,&local_a8);
        FUN_00abbfde();
        FUN_00ab9238();
      }
      uVar13 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),(byte)uVar4 & ((byte)local_48 & 1) == 0)
      ;
      FUN_00abbea2();
      FUN_00ab9fd6();
    }
    else {
      if ((DAT_028a0a79 == '\0') && (cVar2 = FUN_00ad1250(), cVar2 != '\0')) {
        FUN_00ab9f00();
        FUN_00ad1360();
      }
      ppppuVar11 = param_4 + 1;
      if ((undefined4 ****)*param_4 == ppppuVar11) {
        local_b0 = 0;
        psVar10 = (string *)0x0;
        uVar13 = 0;
        ppppuVar9 = ppppuVar11;
      }
      else {
        local_130 = &DAT_0252aff0;
        uVar13 = 0;
        psVar10 = (string *)0x0;
        local_b0 = 0;
        ppppuVar12 = (undefined4 ****)*param_4;
        do {
          std::string::string(psVar10,param_2);
          local_80 = FUN_00abeec2();
          local_68 = &DAT_0252af40;
          local_60 = 0;
          local_58 = &DAT_0252aff0;
          local_50 = 0;
          puVar8 = local_130;
          cVar2 = FUN_00abe6ed();
          this = (string *)CONCAT71((int7)((ulonglong)puVar8 >> 8),local_7c != 1);
          if (cVar2 != '\x01' || local_7c != 1) {
LAB_00ab762d:
            std::string::string(this,param_2);
            local_90 = (undefined4 **)_CFStringCreateWithCString();
            local_98 = (undefined4 ***)&DAT_025203c8;
            if ((local_f8 & 1) != 0) {
              operator_delete(&DAT_025203c8);
            }
            local_a8 = &DAT_0252aff0;
            local_a0 = 0;
            local_48 = local_90;
            lVar5 = _CFDictionaryCreate(1,&local_48,PTR__kCFTypeDictionaryKeyCallBacks_024a9900,
                                        PTR__kCFTypeDictionaryValueCallBacks_024a9908);
            if (local_a0 != 0) {
              _CFRelease();
            }
            local_a0 = lVar5;
            if (lVar5 == 0) {
              FUN_00925fd0();
              FUN_00926010();
              FUN_00928ab0("virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool, bool *, pace::eden::DsigResultMap_T *)"
                           ,0x2c5);
              FUN_009bd5cb();
            }
            lVar5 = local_a0;
            if (local_60 != 0) {
              _CFRelease();
            }
            local_60 = 0;
            local_34 = FUN_00ab6b1a(&local_60,lVar5);
            FUN_00abbea2();
            FUN_00a00c58();
          }
          else {
            param_2 = (string *)0x0;
            this = (string *)0x0;
            lVar5 = FUN_00ac162c(0,0,0);
            if (lVar5 == 0) goto LAB_00ab762d;
            if (local_60 != 0) {
              _CFRelease();
            }
            local_60 = 0;
            local_34 = _SecStaticCodeCreateWithPath();
          }
          *(int *)((longlong)ppppuVar12 + 0x3c) = local_34;
          if (local_34 != 0) {
            FUN_00925fd0();
            FUN_00926010();
            local_98 = (undefined4 ***)&local_34;
            local_90 = (undefined4 **)FUN_009cac80;
            local_88 = FUN_009cefa0;
            FUN_00983230();
            FUN_00928ab0("virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool, bool *, pace::eden::DsigResultMap_T *)"
                         ,0x2cd);
            FUN_009bd5cb();
          }
          local_48 = (undefined4 **)((ulonglong)local_48 & 0xffffffffffffff00);
          param_2 = (string *)(ulonglong)(uVar13 == 0 & (byte)local_6c);
          ppppuVar9 = (undefined4 ****)&local_48;
          bVar3 = FUN_00ab7e04();
          if ((byte)local_48 == '\0') {
            if (bVar3 != 0) {
              local_98 = (undefined4 ***)&local_80;
              param_2 = (string *)&DAT_023d3e9b;
              ppppuVar9 = &local_98;
              FUN_00abbed4();
              FUN_00abbfde();
              FUN_00ab9238();
            }
          }
          else {
            local_b0 = local_b0 + 1;
            if ((undefined4 ****)local_b8 != (undefined4 ****)0x0) {
              *(undefined1 *)local_b8 = 1;
            }
          }
          FUN_00abbea2();
          FUN_00ab9fd6();
          if ((local_e0[0] & 1) != 0) {
            operator_delete(ppppuVar9);
          }
          ppppuVar9 = (undefined4 ****)ppppuVar12[1];
          if ((undefined4 ****)ppppuVar12[1] == (undefined4 ****)0x0) {
            ppppuVar6 = (undefined4 ****)ppppuVar12[2];
            if ((undefined4 ****)*ppppuVar6 != ppppuVar12) {
              do {
                ppppuVar12 = (undefined4 ****)ppppuVar12[2];
                ppppuVar6 = (undefined4 ****)ppppuVar12[2];
              } while ((undefined4 ****)*ppppuVar6 != ppppuVar12);
            }
          }
          else {
            do {
              ppppuVar6 = ppppuVar9;
              ppppuVar9 = (undefined4 ****)*ppppuVar6;
            } while ((undefined4 ****)*ppppuVar6 != (undefined4 ****)0x0);
          }
          uVar13 = uVar13 + 1;
          psVar10 = psVar10 + bVar3;
          ppppuVar9 = (undefined4 ****)local_e0;
          ppppuVar12 = ppppuVar6;
        } while (ppppuVar6 != ppppuVar11);
      }
      ppppuVar11 = (undefined4 ****)((ulonglong)psVar10 ^ uVar13 | local_b0);
      uVar13 = CONCAT71((int7)((ulonglong)ppppuVar9 >> 8),ppppuVar11 == (undefined4 ****)0x0);
    }
    FUN_0098003e();
    if ((DAT_028a0a78 != '\0') && ((char)uVar13 != '\0')) {
      FUN_00ab6efc();
    }
  }
  FUN_00a153c0();
  if ((local_158 & 1) != 0) {
    operator_delete(ppppuVar11);
  }
  return uVar13 & 0xffffffff;
}




// ============================================================
// @00ac67c0 — 2182 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ac6960) */
/* WARNING: Removing unreachable block (ram,0x00ac6dfd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00ac67c0(string *param_1,string *param_2)

{
  longlong lVar1;
  string sVar2;
  byte bVar3;
  int iVar4;
  string *psVar5;
  undefined8 *unaff_RDI;
  string *psVar6;
  bool bVar7;
  undefined4 uVar8;
  byte local_128;
  int local_110;
  byte local_108;
  byte local_f0;
  byte local_d8 [24];
  int local_c0;
  string *local_b8;
  byte local_b0;
  longlong local_a8;
  ulonglong local_98;
  ulonglong local_90;
  int local_88;
  uint uStack_84;
  string *local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_b8 = param_1;
  FUN_00aca500();
  if ((local_78 & 1) == 0) {
    if ((byte)local_78 < 2) {
LAB_00ac67f9:
      FUN_00ac62d0();
      goto LAB_00ac682e;
    }
  }
  else {
    operator_delete(param_1);
    if (CONCAT44(uStack_6c,uStack_70) == 0) goto LAB_00ac67f9;
  }
  std::string::string(param_1,param_2);
LAB_00ac682e:
  psVar6 = local_b8;
  FUN_00aca350();
  local_88 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    DAT_02754568 = 0x8fafd21e25c5e09b;
    param_1 = (string *)&DAT_02520080;
    DAT_02754560 = &DAT_02520080;
    ___cxa_guard_release();
  }
  local_80 = (string *)&DAT_02754560;
  psVar5 = (string *)&local_88;
  FUN_00ac92d0();
  if (local_110 == 1) {
    if (psVar6 == (string *)0x0) {
      ___cxa_allocate_exception();
      local_68 = operator_new((ulong)param_1);
      local_78 = _DAT_023d4ef0;
      uStack_74 = _UNK_023d4ef4;
      uStack_70 = _UNK_023d4ef8;
      uStack_6c = _UNK_023d4efc;
      local_68[2] = 0x6e6f6e61633a3a6d;
      local_68[1] = 0x6574737973656c69;
      *local_68 = 0x663a3a74736f6f62;
      *(undefined4 *)(local_68 + 3) = 0x6c616369;
      *(undefined1 *)((longlong)local_68 + 0x1c) = 0;
      if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        DAT_02754550 = 0xb2ab117a257edf0d;
        DAT_02754548 = &DAT_0251df98;
        ___cxa_guard_release();
      }
      bVar3 = (**(code **)(DAT_02754548 + 0x30))();
      uVar8 = FUN_00ac4640((ulonglong)bVar3 << 0x20 | 2,local_d8,&DAT_02754548);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      DAT_02754550 = 0xb2ab117a257edf0d;
      param_1 = (string *)&DAT_0251df98;
      DAT_02754548 = &DAT_0251df98;
      ___cxa_guard_release();
    }
    *(int *)psVar6 = 2;
    sVar2 = (string)(**(code **)(DAT_02754548 + 0x30))();
    psVar6[4] = sVar2;
    *(undefined ***)(psVar6 + 8) = &DAT_02754548;
    std::string::string(param_1,psVar5);
  }
  else {
    if (local_88 == 0) {
      bVar7 = true;
LAB_00ac6941:
      if (bVar7) {
        FUN_00ac9c40();
        if (psVar6 != (string *)0x0) {
          do {
            FUN_00ac9e20();
            param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
            bVar7 = param_1 == (string *)0x0;
            if ((local_b0 & 1) != 0) {
              operator_delete(param_1);
            }
            if (bVar7) goto LAB_00ac6b50;
            FUN_00acaa70();
            iVar4 = FUN_00ac9910();
            if (iVar4 != 0) {
              FUN_00acac70();
              iVar4 = FUN_00ac9910();
              if (iVar4 == 0) {
                iVar4 = FUN_00ac9910();
                if (iVar4 != 0) {
                  FUN_00ac9e60();
                }
              }
              else {
                FUN_00ac9740();
                psVar5 = psVar6;
                FUN_00ac71d0();
                if (*(int *)psVar6 != 0) {
                  unaff_RDI[2] = 0;
                  unaff_RDI[1] = 0;
                  *unaff_RDI = 0;
                  iVar4 = 1;
                  goto LAB_00ac6b56;
                }
                if (local_c0 == 4) goto LAB_00ac6b80;
              }
            }
            FUN_00acb370();
          } while( true );
        }
        do {
          FUN_00ac9e20();
          param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
          bVar7 = param_1 == (string *)0x0;
          if ((local_b0 & 1) != 0) {
            operator_delete(param_1);
          }
          if (bVar7) goto LAB_00ac6b50;
          FUN_00acaa70();
          iVar4 = FUN_00ac9910();
          if (iVar4 != 0) {
            FUN_00acac70();
            iVar4 = FUN_00ac9910();
            if (iVar4 == 0) {
              iVar4 = FUN_00ac9910();
              if (iVar4 != 0) {
                FUN_00ac9e60();
              }
            }
            else {
              FUN_00ac9740();
              psVar5 = (string *)0x0;
              FUN_00ac71d0();
              if (local_c0 == 4) goto LAB_00ac6b80;
            }
          }
          FUN_00acb370();
        } while( true );
      }
      if (psVar6 != (string *)0x0) {
        *(int *)psVar6 = 0;
        psVar6[4] = (string)0x0;
        if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          param_1 = (string *)&DAT_02754560;
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        *(undefined ***)(psVar6 + 8) = &DAT_02754560;
      }
      std::string::string(param_1,psVar5);
      goto LAB_00ac6dc3;
    }
    if (psVar6 == (string *)0x0) {
      ___cxa_allocate_exception();
      local_68 = operator_new((ulong)param_1);
      local_78 = _DAT_023d4ef0;
      uStack_74 = _UNK_023d4ef4;
      uStack_70 = _UNK_023d4ef8;
      uStack_6c = _UNK_023d4efc;
      local_68[2] = 0x6e6f6e61633a3a6d;
      local_68[1] = 0x6574737973656c69;
      *local_68 = 0x663a3a74736f6f62;
      *(undefined4 *)(local_68 + 3) = 0x6c616369;
      *(undefined1 *)((longlong)local_68 + 0x1c) = 0;
      uVar8 = FUN_00ac4640(CONCAT44(uStack_84,local_88),local_d8,local_80);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_00ac46f0);
    }
    *(string **)(psVar6 + 8) = local_80;
    *(ulonglong *)psVar6 = CONCAT44(uStack_84,local_88);
    param_1 = local_80;
    std::string::string(local_80,psVar5);
  }
LAB_00ac6dc3:
  if ((local_f0 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return unaff_RDI;
LAB_00ac6b50:
  iVar4 = 4;
LAB_00ac6b56:
  bVar7 = false;
  goto LAB_00ac6b59;
LAB_00ac6b80:
  psVar5 = psVar6;
  FUN_00ac7560();
  if ((psVar6 == (string *)0x0) || (*(int *)psVar6 == 0)) {
    FUN_00ac9e60();
    FUN_00aca500();
    lVar1 = local_a8;
    if ((local_b0 & 1) == 0) {
      if (local_b0 < 2) goto LAB_00ac6c01;
LAB_00ac6ccb:
      FUN_00acb370();
      while( true ) {
        FUN_00ac9e20();
        param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
        bVar7 = param_1 == (string *)0x0;
        if ((local_b0 & 1) != 0) {
          operator_delete(param_1);
        }
        if (bVar7) break;
        FUN_00ac9740();
        FUN_00acb370();
      }
      std::string::operator=(param_1,psVar5);
    }
    else {
      operator_delete(param_1);
      if (lVar1 != 0) goto LAB_00ac6ccb;
LAB_00ac6c01:
      std::string::string(param_1,psVar5);
      FUN_00ac9740();
      FUN_00acb370();
      while( true ) {
        FUN_00ac9e20();
        param_1 = (string *)(local_58 ^ local_90 | local_60 ^ local_98);
        bVar7 = param_1 == (string *)0x0;
        if ((local_b0 & 1) != 0) {
          operator_delete(param_1);
        }
        if (bVar7) break;
        FUN_00ac9740();
        FUN_00acb370();
      }
      std::string::operator=(param_1,psVar5);
      if ((local_128 & 1) != 0) {
        operator_delete(param_1);
      }
    }
    bVar7 = true;
    iVar4 = 4;
  }
  else {
    unaff_RDI[2] = 0;
    unaff_RDI[1] = 0;
    *unaff_RDI = 0;
    iVar4 = 1;
    bVar7 = false;
  }
  if ((local_108 & 1) != 0) {
    operator_delete(param_1);
  }
LAB_00ac6b59:
  if ((local_78 & 1) != 0) {
    operator_delete(param_1);
  }
  psVar6 = local_b8;
  if (iVar4 != 4) goto LAB_00ac6dc3;
  goto LAB_00ac6941;
}




// ============================================================
// @00ac86a0 — 2100 bytes
// str: ""boost::filesystem::current_path""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac86a0(dword *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  size_t sVar10;
  undefined4 *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar11;
  undefined4 uVar12;
  dword *local_440;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
  if (pcVar6 == (char *)0x0) {
    piVar7 = ___error();
    sVar10 = (size_t)param_2;
    if ((*piVar7 != 0x22) && (*piVar7 != 0)) {
      FUN_00ac48d0();
      goto LAB_00ac872d;
    }
    if (unaff_RSI == (undefined4 *)0x0) {
      operator_new__((ulong)param_1);
      pcVar6 = _getcwd((char *)param_1,sVar10);
      param_1 = &MACH_HEADER.cpusubtype;
      local_440 = &MACH_HEADER.cpusubtype;
      if (pcVar6 == (char *)0x0) {
        piVar7 = ___error();
        if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
          operator_delete__(param_1);
          operator_new__((ulong)param_1);
          pcVar6 = _getcwd((char *)param_1,sVar10);
          if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
          piVar7 = ___error();
          if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
            operator_delete__(param_1);
            operator_new__((ulong)param_1);
            pcVar6 = _getcwd((char *)param_1,sVar10);
            if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
            piVar7 = ___error();
            if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
              operator_delete__(param_1);
              operator_new__((ulong)param_1);
              pcVar6 = _getcwd((char *)param_1,sVar10);
              if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
              piVar7 = ___error();
              if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                operator_delete__(param_1);
                operator_new__((ulong)param_1);
                pcVar6 = _getcwd((char *)param_1,sVar10);
                if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                piVar7 = ___error();
                if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                  operator_delete__(param_1);
                  operator_new__((ulong)param_1);
                  pcVar6 = _getcwd((char *)param_1,sVar10);
                  if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                  piVar7 = ___error();
                  if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                    operator_delete__(param_1);
                    operator_new__((ulong)param_1);
                    pcVar6 = _getcwd((char *)param_1,sVar10);
                    if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                    piVar7 = ___error();
                    if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                      operator_delete__(param_1);
                      operator_new__((ulong)param_1);
                      pcVar6 = _getcwd((char *)param_1,sVar10);
                      if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                      piVar7 = ___error();
                      if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                        operator_delete__(param_1);
                        operator_new__((ulong)param_1);
                        pcVar6 = _getcwd((char *)param_1,sVar10);
                        if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                        piVar7 = ___error();
                        if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                          operator_delete__(param_1);
                          operator_new__((ulong)param_1);
                          pcVar6 = _getcwd((char *)param_1,sVar10);
                          if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                          piVar7 = ___error();
                          if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                            operator_delete__(param_1);
                            operator_new__((ulong)param_1);
                            pcVar6 = _getcwd((char *)param_1,sVar10);
                            if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                            piVar7 = ___error();
                            if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                              operator_delete__(param_1);
                              operator_new__((ulong)param_1);
                              pcVar6 = _getcwd((char *)param_1,sVar10);
                              if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                              piVar7 = ___error();
                              if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                operator_delete__(param_1);
                                operator_new__((ulong)param_1);
                                pcVar6 = _getcwd((char *)param_1,sVar10);
                                if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                piVar7 = ___error();
                                if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                  operator_delete__(param_1);
                                  operator_new__((ulong)param_1);
                                  pcVar6 = _getcwd((char *)param_1,sVar10);
                                  if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                  piVar7 = ___error();
                                  if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                    operator_delete__(param_1);
                                    operator_new__((ulong)param_1);
                                    pcVar6 = _getcwd((char *)param_1,sVar10);
                                    if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                    piVar7 = ___error();
                                    if ((*piVar7 == 0) || (*piVar7 == 0x22)) {
                                      operator_delete__(param_1);
                                      uVar9 = (ulong)param_1;
                                      ___cxa_allocate_exception();
                                      puVar8 = operator_new(uVar9);
                                      *(undefined8 *)((longlong)puVar8 + 0x17) = 0x687461705f746e65;
                                      puVar8[2] = 0x65727275633a3a6d;
                                      puVar8[1] = 0x6574737973656c69;
                                      *puVar8 = 0x663a3a74736f6f62;
                                      *(undefined1 *)((longlong)puVar8 + 0x1f) = 0;
                                      if (DAT_02754570 == '\0') {
                                        iVar5 = ___cxa_guard_acquire();
                                        if (iVar5 != 0) {
                                          DAT_02754568 = 0x8fafd21e25c5e09b;
                                          DAT_02754560 = &DAT_02520080;
                                          ___cxa_guard_release();
                                        }
                                      }
                                      bVar4 = (**(code **)(DAT_02754560 + 0x30))();
                                      uVar12 = FUN_00ac4440(&DAT_02754560,
                                                            (ulonglong)bVar4 << 0x20 | 0x3f);
                    /* WARNING: Subroutine does not return */
                                      ___cxa_throw(uVar12,FUN_00ac46f0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_00ac8cc1:
        FUN_00ac48d0();
      }
      else {
LAB_00ac88a7:
        std::string::assign((char *)param_1);
        if (unaff_RSI != (undefined4 *)0x0) {
          *unaff_RSI = 0;
          *(undefined1 *)(unaff_RSI + 1) = 0;
          if (DAT_02754570 == '\0') {
            iVar5 = ___cxa_guard_acquire();
            if (iVar5 != 0) {
              DAT_02754568 = 0x8fafd21e25c5e09b;
              DAT_02754560 = &DAT_02520080;
              ___cxa_guard_release();
            }
          }
          *(undefined ***)local_440 = &DAT_02754560;
          param_1 = local_440;
        }
      }
      operator_delete__(param_1);
      goto LAB_00ac872d;
    }
    *unaff_RSI = 0;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        param_1 = (dword *)&DAT_02520080;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
    local_440 = unaff_RSI + 2;
    *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
    uVar11 = 0x400;
    do {
      operator_new__((ulong)param_1);
      pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
      if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
      piVar7 = ___error();
      if ((*piVar7 != 0x22) && (*piVar7 != 0)) goto LAB_00ac8cc1;
      *unaff_RSI = 0;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      if (DAT_02754570 == '\0') {
        iVar5 = ___cxa_guard_acquire();
        if (iVar5 != 0) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
      }
      param_1 = (dword *)&DAT_02754560;
      *(undefined ***)local_440 = &DAT_02754560;
      operator_delete__(&DAT_02754560);
      bVar2 = uVar11 < 0x800001;
      uVar11 = uVar11 * 2;
    } while (bVar2);
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
    *unaff_RSI = 0x3f;
    uVar3 = (**(code **)(DAT_02754560 + 0x30))();
    *(undefined1 *)(unaff_RSI + 1) = uVar3;
  }
  else {
    std::string::assign((char *)param_1);
    if (unaff_RSI == (undefined4 *)0x0) goto LAB_00ac872d;
    *unaff_RSI = 0;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
  }
  *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
LAB_00ac872d:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @00ab8a5c — 1829 bytes
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac"
// str: ""CFArrayGetValueAtIndex returned no certificate data at index %d.""
// str: ""pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std:"
// str: ""SecCertificateCopyData returned a NULL attempting to access the certificate at index %d.""
// str: ""SecCertificateGetData returned error %d attempting to access the certificate at index %d.""
// ============================================================

longlong * FUN_00ab8a5c(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulong uVar12;
  undefined *puVar13;
  string *this;
  string *psVar14;
  ulonglong uVar15;
  longlong *unaff_RDI;
  undefined4 uVar16;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  code *local_1b0;
  code *local_1a8;
  code *local_1a0;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  puVar13 = PTR__kSecCodeInfoCertificates_024a9980;
  local_210 = param_1;
  cVar4 = _CFDictionaryGetValueIfPresent(PTR__kSecCodeInfoCertificates_024a9980,&local_218);
  uVar12 = (ulong)puVar13;
  if ((cVar4 != '\0') && (local_218 != 0)) {
    pvVar6 = operator_new(uVar12);
    FUN_0097c240();
    puVar7 = operator_new(uVar12);
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = &DAT_0252b020;
    puVar7[3] = pvVar6;
    *unaff_RDI = (longlong)pvVar6;
    plVar2 = (longlong *)unaff_RDI[1];
    unaff_RDI[1] = (longlong)puVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_1d8 = (undefined8 *)0x0;
    puStack_1d0 = (undefined8 *)0x0;
    local_1c8 = (undefined8 *)0x0;
    lVar8 = _CFArrayGetCount();
    local_1b8 = 0;
    if (0 < lVar8) {
      do {
        lVar9 = _CFArrayGetValueAtIndex();
        if (lVar9 == 0) {
          FUN_00925fd0();
          uVar10 = FUN_00926010();
          local_1b0 = (code *)&local_1b8;
          local_1a8 = FUN_0094e696;
          local_1a0 = FUN_0094e69c;
          FUN_00983230();
          uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                ,0x732);
          FUN_009bd5cb(uVar16,uVar10);
        }
        local_208 = &DAT_0252aea8;
        uStack_1f8 = 0;
        local_200 = 0;
        local_1f0 = &DAT_0252af70;
        local_1e8 = 0;
        if (PTR__SecCertificateCopyData_0249c228 == (undefined *)0x0) {
          if (PTR__SecCertificateGetData_0249c230 == (undefined *)0x0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            local_1b0 = (code *)&local_1b8;
            local_1a8 = FUN_0094e696;
            local_1a0 = FUN_0094e69c;
            FUN_00983230();
            uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                  ,0x794);
            FUN_009bd5cb(uVar16,uVar10);
          }
          else {
            local_1dc = _SecCertificateGetData();
            if (local_1dc != 0) {
              FUN_00925fd0();
              uVar10 = FUN_00926010();
              local_1b0 = (code *)&local_1dc;
              local_1a8 = FUN_009cac80;
              local_1a0 = FUN_009cefa0;
              FUN_00983230();
              local_1b0 = (code *)&local_1b8;
              local_1a8 = FUN_0094e696;
              local_1a0 = FUN_0094e69c;
              FUN_00983230();
              uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                    ,0x784);
              FUN_009bd5cb(uVar16,uVar10);
            }
            local_200 = CONCAT44(uStack_234,local_238);
            uStack_1f8 = CONCAT44(uStack_22c,uStack_230);
          }
        }
        else {
          lVar9 = _SecCertificateCopyData();
          if (local_1e8 != 0) {
            _CFRelease();
          }
          local_1e8 = lVar9;
          if (lVar9 == 0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            local_1b0 = (code *)&local_1b8;
            local_1a8 = FUN_0094e696;
            local_1a0 = FUN_0094e69c;
            FUN_00983230();
            uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                  ,0x774);
            FUN_009bd5cb(uVar16,uVar10);
          }
          local_200 = _CFDataGetLength();
          uStack_1f8 = _CFDataGetBytePtr();
        }
        puVar7 = puStack_1d0;
        if (puStack_1d0 == local_1c8) {
          lVar9 = ((longlong)puStack_1d0 - (longlong)local_1d8 >> 3) * -0x3333333333333333;
          if (0x666666666666666 < lVar9 + 1U) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          FUN_00abc46a(&local_1c8,lVar9);
          *(undefined **)local_1a0 = &DAT_0252aea8;
          *(undefined8 *)(local_1a0 + 8) = local_200;
          *(undefined8 *)(local_1a0 + 0x10) = uStack_1f8;
          *(undefined **)(local_1a0 + 0x18) = &DAT_0252af70;
          *(longlong *)(local_1a0 + 0x20) = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          local_1a0 = local_1a0 + 0x28;
          FUN_00abc398();
          FUN_00abc4dc();
        }
        else {
          *puStack_1d0 = &DAT_0252aea8;
          puStack_1d0[1] = local_200;
          puStack_1d0[2] = uStack_1f8;
          puStack_1d0[3] = &DAT_0252af70;
          puStack_1d0[4] = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          puStack_1d0 = puVar7 + 5;
        }
        local_208 = &DAT_0252aea8;
        FUN_00abb66e();
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < lVar8);
    }
    local_1b0 = FUN_00ab9bb6;
    FUN_00abc51d();
    uVar16 = FUN_0098ede4();
    puVar3 = puStack_1d0;
    for (puVar7 = local_1d8; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      uVar16 = FUN_0098ef68(uVar16,*(undefined4 *)(puVar7 + 1));
    }
    lVar8 = *unaff_RDI;
    uVar5 = FUN_0098f810();
    uVar15 = (ulonglong)uVar5;
    psVar14 = *(string **)(lVar8 + 0x118);
    uVar11 = *(longlong *)(lVar8 + 0x120) - (longlong)psVar14;
    if (uVar11 < uVar15) {
      FUN_0088d550();
      psVar14 = *(string **)(lVar8 + 0x118);
    }
    else if (uVar15 < uVar11) {
      *(string **)(lVar8 + 0x120) = psVar14 + uVar15;
    }
    this = (string *)0x0;
    (**(code **)(local_1b0 + 0x48))();
    *(undefined1 *)(*unaff_RDI + 0x134) = 1;
    FUN_008dfe28();
    std::string::operator=(this,psVar14);
    *(undefined1 *)(*unaff_RDI + 0x110) = 1;
    FUN_008d6858();
    std::string::operator=(this,psVar14);
    *(undefined1 *)(*unaff_RDI + 0x111) = 1;
    std::string::operator=(this,psVar14);
    FUN_0098edfa();
    FUN_00abc342();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @00abc51d — 1750 bytes
// ============================================================

void FUN_00abc51d(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 local_80 [2];
  undefined *local_70;
  longlong local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined **local_40;
  int local_34;
  
  local_48 = local_80;
  local_40 = &local_70;
  puVar13 = &DAT_0252aea8;
LAB_00abc57d:
  local_58 = unaff_RSI - 0x28;
  uVar6 = unaff_RDI;
LAB_00abc5c1:
  while( true ) {
    unaff_RDI = uVar6;
    uVar6 = unaff_RSI - unaff_RDI;
    if ((ulonglong)(((longlong)uVar6 >> 3) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00abcbd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00abcd5c +
                *(int *)(&DAT_00abcd5c + ((longlong)uVar6 >> 3) * 0x3333333333333334)))();
      return;
    }
    if ((longlong)uVar6 < 0x118) {
      FUN_00abd84d(uVar6,param_2);
      return;
    }
    uVar9 = unaff_RDI + (uVar6 / 0x50) * 0x28;
    if ((longlong)uVar6 < 0x9c19) {
      iVar5 = FUN_00abcd74(param_2,local_58);
    }
    else {
      iVar5 = FUN_00abd489((uVar6 / 0x14 & 0xfffffffffffffff8) * 5 + uVar9,uVar9,local_58,param_2,
                           puVar13);
    }
    cVar3 = (*(code *)*param_2)();
    uVar6 = local_58;
    uVar10 = unaff_RSI - 0x50;
    if (cVar3 != '\0') break;
    while (uVar6 = uVar10, uVar10 = local_58, unaff_RDI != uVar6) {
      cVar3 = (*(code *)*param_2)();
      puVar2 = local_48;
      uVar10 = uVar6 - 0x28;
      if (cVar3 != '\0') goto LAB_00abc864;
    }
    uVar6 = unaff_RDI + 0x28;
    cVar3 = (*(code *)*param_2)();
    if (cVar3 == '\0') {
      if (uVar6 == uVar10) {
        return;
      }
      uVar6 = unaff_RDI + 0x50;
      while (cVar3 = (*(code *)*param_2)(), puVar2 = local_48, cVar3 == '\0') {
        uVar6 = uVar6 + 0x28;
        if (unaff_RSI == uVar6) {
          return;
        }
      }
      uVar1 = *(undefined8 *)(uVar6 - 0x20);
      local_48[1] = *(undefined8 *)(uVar6 - 0x18);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(uVar6 - 8);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(unaff_RSI - 0x20);
      *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(unaff_RSI - 0x18);
      *(undefined8 *)(uVar6 - 0x20) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(unaff_RSI - 0x18) = local_48[1];
      *(undefined8 *)(unaff_RSI - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar10 = local_58;
    }
    if (uVar6 == uVar10) {
      return;
    }
    while( true ) {
      lVar7 = uVar6 - 0x10;
      do {
        lVar12 = lVar7;
        cVar3 = (*(code *)*param_2)();
        lVar7 = lVar12 + 0x28;
      } while (cVar3 == '\0');
      local_50 = lVar12 + 0x38;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 - 0x28;
        cVar3 = (*(code *)*param_2)();
        puVar2 = local_48;
      } while (cVar3 != '\0');
      uVar6 = lVar12 + 0x10U;
      if (uVar10 <= lVar12 + 0x10U) break;
      uVar1 = *(undefined8 *)(lVar12 + 0x18);
      local_48[1] = *(undefined8 *)(lVar12 + 0x20);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(lVar12 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(uVar9 - 0x20);
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(uVar9 - 0x18);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(uVar9 - 0x18) = local_48[1];
      *(undefined8 *)(uVar9 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar6 = local_50;
    }
  }
  goto LAB_00abc908;
LAB_00abc864:
  uVar1 = *(undefined8 *)(unaff_RDI + 8);
  local_34 = iVar5;
  local_48[1] = *(undefined8 *)(unaff_RDI + 0x10);
  *puVar2 = uVar1;
  local_70 = &DAT_0252af70;
  local_68 = *(longlong *)(unaff_RDI + 0x20);
  if (local_68 != 0) {
    _CFRetain();
  }
  uVar1 = *(undefined8 *)(uVar6 + 8);
  *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(uVar6 + 0x10);
  *(undefined8 *)(unaff_RDI + 8) = uVar1;
  FUN_00abdcf0();
  uVar1 = *local_48;
  *(undefined8 *)(uVar6 + 0x10) = local_48[1];
  *(undefined8 *)(uVar6 + 8) = uVar1;
  FUN_00abdcf0();
  FUN_00abb66e();
  iVar5 = local_34 + 1;
LAB_00abc908:
  uVar10 = unaff_RDI + 0x28;
  uVar8 = uVar10;
  if (uVar10 < uVar6) {
    while( true ) {
      local_34 = iVar5;
      uVar10 = uVar8 - 0x28;
      do {
        uVar8 = uVar10;
        uVar10 = uVar8 + 0x28;
        cVar3 = (*(code *)*param_2)();
      } while (cVar3 != '\0');
      local_50 = uVar8 + 0x50;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 - 0x28;
        cVar3 = (*(code *)*param_2)();
        puVar2 = local_48;
      } while (cVar3 == '\0');
      iVar5 = local_34;
      if (uVar6 < uVar10) break;
      uVar1 = *(undefined8 *)(uVar8 + 0x30);
      local_48[1] = *(undefined8 *)(uVar8 + 0x38);
      *puVar2 = uVar1;
      local_70 = &DAT_0252af70;
      local_68 = *(longlong *)(uVar8 + 0x48);
      local_60 = (undefined8 *)(uVar8 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(undefined8 *)(uVar11 - 0x20);
      local_60[1] = *(undefined8 *)(uVar11 - 0x18);
      *local_60 = uVar1;
      local_60 = (undefined8 *)(uVar11 - 0x10);
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(undefined8 *)(uVar11 - 0x18) = local_48[1];
      *(undefined8 *)(uVar11 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar8 = local_50;
      iVar5 = local_34 + 1;
      if (uVar9 == uVar10) {
        uVar9 = uVar6;
      }
    }
  }
  if ((uVar10 != uVar9) && (cVar3 = (*(code *)*param_2)(), puVar2 = local_48, cVar3 != '\0')) {
    uVar1 = *(undefined8 *)(uVar10 + 8);
    local_34 = iVar5;
    local_48[1] = *(undefined8 *)(uVar10 + 0x10);
    *puVar2 = uVar1;
    local_70 = &DAT_0252af70;
    local_68 = *(longlong *)(uVar10 + 0x20);
    if (local_68 != 0) {
      _CFRetain();
    }
    uVar1 = *(undefined8 *)(uVar9 + 8);
    *(undefined8 *)(uVar10 + 0x10) = *(undefined8 *)(uVar9 + 0x10);
    *(undefined8 *)(uVar10 + 8) = uVar1;
    local_50 = uVar10;
    FUN_00abdcf0();
    uVar1 = *local_48;
    *(undefined8 *)(uVar9 + 0x10) = local_48[1];
    *(undefined8 *)(uVar9 + 8) = uVar1;
    FUN_00abdcf0();
    FUN_00abb66e();
    iVar5 = local_34 + 1;
    uVar10 = local_50;
  }
  uVar9 = uVar10;
  if (iVar5 == 0) {
    uVar4 = FUN_00abd9c8();
    local_60 = (undefined8 *)CONCAT71(local_60._1_7_,uVar4);
    local_50 = uVar10;
    cVar3 = FUN_00abd9c8();
    if (cVar3 != '\0') goto LAB_00abcbac;
    uVar9 = local_50;
    uVar6 = uVar10 + 0x28;
    if ((char)local_60 != '\0') goto LAB_00abc5c1;
  }
  lVar7 = ((longlong)(unaff_RSI - uVar9) >> 3) * -0x3333333333333333;
  if (lVar7 <= ((longlong)(uVar9 - unaff_RDI) >> 3) * -0x3333333333333333) {
    FUN_00abc51d(lVar7,param_2);
    unaff_RSI = uVar9;
    goto LAB_00abc57d;
  }
  FUN_00abc51d(lVar7,param_2);
  uVar6 = uVar9 + 0x28;
  goto LAB_00abc5c1;
LAB_00abcbac:
  unaff_RSI = local_50;
  if ((char)local_60 != '\0') {
    return;
  }
  goto LAB_00abc57d;
}




// ============================================================
// @00abac24 — 1750 bytes
// ============================================================

void FUN_00abac24(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  bool bVar14;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  
  puVar10 = (undefined8 *)unaff_RDI[1];
  puVar9 = (undefined8 *)unaff_RDI[2];
  uVar3 = (ulonglong)((longlong)puVar9 - (longlong)puVar10 == 0) + unaff_RSI;
  uVar11 = ((uVar3 >> 9) + 1) - (ulonglong)((uVar3 & 0x1ff) == 0);
  uVar3 = (ulonglong)unaff_RDI[4] >> 9;
  if (uVar11 < uVar3) {
    uVar3 = uVar11;
  }
  uVar11 = uVar11 - uVar3;
  if (uVar11 == 0) {
    unaff_RDI[4] = unaff_RDI[4] + uVar3 * -0x200;
    if (uVar3 != 0) {
      while( true ) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        unaff_RDI[1] = (longlong)puVar10;
        puVar4 = (undefined8 *)unaff_RDI[3];
        if (puVar9 == puVar4) {
          puVar5 = (undefined8 *)*unaff_RDI;
          if (puVar10 < puVar5 || (longlong)puVar10 - (longlong)puVar5 == 0) {
            uVar11 = (longlong)puVar4 - (longlong)puVar5 >> 2;
            if ((longlong)puVar4 - (longlong)puVar5 == 0) {
              uVar11 = 1;
            }
            if (0x1fffffffffffffff < uVar11) goto LAB_00abb2f0;
            pvVar12 = operator_new((ulong)puVar5);
            puVar1 = (undefined8 *)((longlong)pvVar12 + (uVar11 >> 2) * 8);
            param_3 = (undefined8 *)((longlong)pvVar12 + uVar11 * 8);
            lVar6 = (longlong)puVar4 - (longlong)puVar10;
            puVar9 = puVar1;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *puVar9 = *(undefined8 *)((longlong)puVar10 + lVar7);
                puVar9 = (undefined8 *)((longlong)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                lVar7 = lVar7 + 8;
              } while ((lVar6 >> 3) * 8 != lVar7);
              puVar5 = (undefined8 *)*unaff_RDI;
              puVar9 = (undefined8 *)((longlong)puVar1 + lVar6);
            }
            *unaff_RDI = (longlong)pvVar12;
            unaff_RDI[1] = (longlong)puVar1;
            unaff_RDI[2] = (longlong)puVar9;
            unaff_RDI[3] = (longlong)param_3;
            if (puVar5 != (undefined8 *)0x0) {
              operator_delete(puVar9);
              puVar9 = (undefined8 *)unaff_RDI[2];
            }
          }
          else {
            lVar6 = (longlong)puVar10 - (longlong)puVar5 >> 3;
            pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
            lVar6 = lVar6 + 1 + (longlong)pvVar12 >> 1;
            pvVar13 = (void *)((longlong)puVar4 - (longlong)puVar10);
            puVar4 = puVar10;
            if (pvVar13 != (void *)0x0) {
              _memmove(pvVar12,pvVar13,(size_t)param_3);
              puVar4 = (undefined8 *)unaff_RDI[1];
            }
            puVar9 = puVar10 + (((longlong)pvVar13 >> 3) - lVar6);
            unaff_RDI[2] = (longlong)puVar9;
            unaff_RDI[1] = (longlong)(puVar4 + -lVar6);
          }
        }
        *puVar9 = uVar2;
        puVar9 = (undefined8 *)(unaff_RDI[2] + 8);
        unaff_RDI[2] = (longlong)puVar9;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        puVar10 = (undefined8 *)unaff_RDI[1];
      }
    }
  }
  else {
    lVar7 = unaff_RDI[3] - *unaff_RDI;
    lVar6 = (longlong)puVar9 - (longlong)puVar10 >> 3;
    if ((ulonglong)((lVar7 >> 3) - lVar6) < uVar11) {
      uVar8 = lVar7 >> 2;
      if (uVar8 < lVar6 + uVar11) {
        uVar8 = lVar6 + uVar11;
      }
      if (uVar8 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar8) {
LAB_00abb2f0:
                    /* WARNING: Subroutine does not return */
          FUN_00ab9d40();
        }
        local_68 = operator_new(0xffffffff);
      }
      puStack_60 = local_68 + (lVar6 - uVar3);
      puStack_50 = local_68 + uVar8;
      puVar9 = puStack_60;
      do {
        operator_new((ulong)puVar9);
        FUN_00aba724();
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      local_58 = puStack_60;
      if (uVar3 != 0) {
        puVar9 = (undefined8 *)unaff_RDI[1];
        uVar11 = uVar3;
        do {
          if (local_58 == puStack_50) {
            if (puStack_60 < local_68 || (longlong)puStack_60 - (longlong)local_68 == 0) {
              uVar8 = (longlong)puStack_50 - (longlong)local_68 >> 2;
              if ((longlong)puStack_50 - (longlong)local_68 == 0) {
                uVar8 = 1;
              }
              if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00ab9d40();
              }
              puVar4 = operator_new((ulong)local_68);
              param_3 = puVar4 + uVar8;
              puVar10 = puVar4 + (uVar8 >> 2);
              lVar6 = (longlong)puStack_50 - (longlong)puStack_60;
              local_58 = puVar10;
              if (lVar6 != 0) {
                local_58 = (undefined8 *)((longlong)puVar10 + lVar6);
                lVar7 = 0;
                puVar5 = puVar10;
                do {
                  *puVar5 = *(undefined8 *)((longlong)puStack_60 + lVar7);
                  puVar5 = (undefined8 *)((longlong)puVar4 + lVar7 + (uVar8 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
              }
              bVar14 = local_68 != (undefined8 *)0x0;
              local_68 = puVar4;
              puStack_60 = puVar10;
              puStack_50 = param_3;
              if (bVar14) {
                operator_delete(local_58);
              }
            }
            else {
              lVar6 = (longlong)puStack_60 - (longlong)local_68 >> 3;
              lVar6 = (lVar6 + 1) - (lVar6 + 1 >> 0x3f) >> 1;
              pvVar12 = (void *)((longlong)puStack_50 - (longlong)puStack_60);
              if (pvVar12 != (void *)0x0) {
                _memmove(puStack_60 + -lVar6,pvVar12,(size_t)param_3);
              }
              local_58 = puStack_60 + -lVar6 + ((longlong)pvVar12 >> 3);
              puStack_60 = puStack_60 + -lVar6;
            }
          }
          *local_58 = *puVar9;
          local_58 = local_58 + 1;
          puVar9 = (undefined8 *)(unaff_RDI[1] + 8);
          unaff_RDI[1] = (longlong)puVar9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      for (lVar6 = unaff_RDI[2]; lVar6 != unaff_RDI[1]; lVar6 = lVar6 + -8) {
        FUN_00aba888();
      }
      lVar6 = *unaff_RDI;
      *unaff_RDI = (longlong)local_68;
      unaff_RDI[1] = (longlong)puStack_60;
      pvVar12 = (void *)unaff_RDI[2];
      unaff_RDI[2] = (longlong)local_58;
      unaff_RDI[3] = (longlong)puStack_50;
      unaff_RDI[4] = unaff_RDI[4] + uVar3 * -0x200;
      if (lVar6 != 0) {
        operator_delete(pvVar12);
      }
    }
    else {
      uVar8 = uVar11;
      if ((undefined8 *)unaff_RDI[3] != puVar9) {
        do {
          operator_new((ulong)puVar9);
          FUN_00aba478();
          if (uVar11 == 1) {
            lVar6 = unaff_RDI[4];
            goto LAB_00abb159;
          }
          uVar11 = uVar11 - 1;
          uVar8 = uVar11;
        } while (unaff_RDI[3] != unaff_RDI[2]);
      }
      do {
        operator_new((ulong)puVar9);
        FUN_00aba5dc();
        puVar9 = (undefined8 *)unaff_RDI[4];
        lVar6 = (longlong)puVar9 + (0x200 - (ulonglong)(unaff_RDI[2] - unaff_RDI[1] == 8));
        unaff_RDI[4] = lVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar3 = uVar3 + uVar8;
LAB_00abb159:
      unaff_RDI[4] = lVar6 + uVar3 * -0x200;
      if (uVar3 != 0) {
        puVar9 = (undefined8 *)unaff_RDI[2];
        do {
          puVar10 = (undefined8 *)unaff_RDI[3];
          uVar2 = *(undefined8 *)unaff_RDI[1];
          puVar4 = (undefined8 *)unaff_RDI[1] + 1;
          unaff_RDI[1] = (longlong)puVar4;
          if (puVar9 == puVar10) {
            puVar5 = (undefined8 *)*unaff_RDI;
            if (puVar4 < puVar5 || (longlong)puVar4 - (longlong)puVar5 == 0) {
              uVar11 = (longlong)puVar10 - (longlong)puVar5 >> 2;
              if ((longlong)puVar10 - (longlong)puVar5 == 0) {
                uVar11 = 1;
              }
              if (0x1fffffffffffffff < uVar11) goto LAB_00abb2f0;
              pvVar12 = operator_new((ulong)puVar5);
              puVar1 = (undefined8 *)((longlong)pvVar12 + (uVar11 >> 2) * 8);
              param_3 = (undefined8 *)((longlong)pvVar12 + uVar11 * 8);
              lVar6 = (longlong)puVar10 - (longlong)puVar4;
              puVar9 = puVar1;
              if (lVar6 != 0) {
                lVar7 = 0;
                do {
                  *puVar9 = *(undefined8 *)((longlong)puVar4 + lVar7);
                  puVar9 = (undefined8 *)((longlong)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
                puVar5 = (undefined8 *)*unaff_RDI;
                puVar9 = (undefined8 *)((longlong)puVar1 + lVar6);
              }
              *unaff_RDI = (longlong)pvVar12;
              unaff_RDI[1] = (longlong)puVar1;
              unaff_RDI[2] = (longlong)puVar9;
              unaff_RDI[3] = (longlong)param_3;
              if (puVar5 != (undefined8 *)0x0) {
                operator_delete(puVar9);
                puVar9 = (undefined8 *)unaff_RDI[2];
              }
            }
            else {
              lVar6 = (longlong)puVar4 - (longlong)puVar5 >> 3;
              pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
              lVar6 = lVar6 + 1 + (longlong)pvVar12 >> 1;
              pvVar13 = (void *)((longlong)puVar10 - (longlong)puVar4);
              puVar10 = puVar4;
              if (pvVar13 != (void *)0x0) {
                _memmove(pvVar12,pvVar13,(size_t)param_3);
                puVar10 = (undefined8 *)unaff_RDI[1];
              }
              puVar9 = puVar4 + (((longlong)pvVar13 >> 3) - lVar6);
              unaff_RDI[2] = (longlong)puVar9;
              unaff_RDI[1] = (longlong)(puVar10 + -lVar6);
            }
          }
          *puVar9 = uVar2;
          puVar9 = (undefined8 *)(unaff_RDI[2] + 8);
          unaff_RDI[2] = (longlong)puVar9;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}




// ============================================================
// @00ab804a — 1134 bytes
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac"
// str: ""What? We should always find a signing certificate chain.""
// str: ""virtual pace::SharedSignedDigest_T pace::OsSignatureMac::computeMatchingDigestForVerify(const pace:"
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ab842c) */
/* WARNING: Removing unreachable block (ram,0x00ab843e) */
/* WARNING: Removing unreachable block (ram,0x00ab8355) */
/* WARNING: Removing unreachable block (ram,0x00ab836b) */
/* WARNING: Removing unreachable block (ram,0x00ab849d) */

void FUN_00ab804a(string *param_1,string *param_2,size_t param_3)

{
  longlong *plVar1;
  string sVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  void *pvVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar5 = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if (param_2[0x136] != (string)0x0) {
    std::string::operator=(param_1,param_2);
    uVar5 = FUN_00abeec2();
  }
  lVar7 = FUN_008dfe28();
  sVar2 = param_2[0x40];
  pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
  pvVar10 = pvVar9;
  if (((byte)sVar2 & 1) != 0) {
    pvVar10 = *(void **)(param_2 + 0x48);
  }
  bVar3 = *(byte *)(lVar7 + 0xf0);
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
  }
  else {
    pvVar11 = *(void **)(lVar7 + 0xf8);
  }
  if (pvVar10 == pvVar11) {
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0xf1;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x100);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab8140;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab8140;
    FUN_00ab84e8(param_2 + 0xf8,uVar5);
    goto LAB_00ab830d;
  }
LAB_00ab8140:
  lVar7 = FUN_008dfe28();
  sVar2 = param_2[0x40];
  pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
  pvVar10 = pvVar9;
  if (((byte)sVar2 & 1) != 0) {
    pvVar10 = *(void **)(param_2 + 0x48);
  }
  bVar3 = *(byte *)(lVar7 + 0x108);
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
  }
  else {
    pvVar11 = *(void **)(lVar7 + 0x110);
  }
  if (pvVar10 == pvVar11) {
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0x109;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x118);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab81ee;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab81ee;
    FUN_00ab85e2(param_2,uVar5);
  }
  else {
LAB_00ab81ee:
    lVar7 = FUN_008dfe28();
    sVar2 = param_2[0x40];
    pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
    pvVar10 = pvVar9;
    if (((byte)sVar2 & 1) != 0) {
      pvVar10 = *(void **)(param_2 + 0x48);
    }
    bVar3 = *(byte *)(lVar7 + 0x120);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
    }
    else {
      pvVar11 = *(void **)(lVar7 + 0x128);
    }
    if (pvVar10 != pvVar11) {
LAB_00ab829f:
      lVar7 = FUN_008dfe28();
      sVar2 = param_2[0x40];
      pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
      pvVar10 = pvVar9;
      if (((byte)sVar2 & 1) != 0) {
        pvVar10 = *(void **)(param_2 + 0x48);
      }
      bVar3 = *(byte *)(lVar7 + 0xc0);
      if ((bVar3 & 1) == 0) {
        pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
      }
      else {
        pvVar11 = *(void **)(lVar7 + 200);
      }
      if (pvVar10 != pvVar11) {
        return;
      }
      if ((bVar3 & 1) == 0) {
        lVar7 = lVar7 + 0xc1;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0xd0);
      }
      if (((byte)sVar2 & 1) == 0) {
        if (pvVar10 != (void *)0x0) {
          pvVar10 = (void *)0x0;
          do {
            if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10)) {
              return;
            }
            pvVar10 = (void *)((longlong)pvVar10 + 1);
          } while (pvVar9 != pvVar10);
        }
      }
      else if ((pvVar10 != (void *)0x0) &&
              (iVar6 = _memcmp(pvVar9,pvVar10,CONCAT31((int3)(param_3 >> 8),1)), iVar6 != 0)) {
        return;
      }
      FUN_00ab8a5c(param_2 + 0xf8,*(undefined8 *)(*(longlong *)(unaff_RSI + 0x50) + 0x40));
      plVar4 = (longlong *)unaff_RDI[1];
      *(undefined4 *)unaff_RDI = local_48;
      *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_44;
      *(undefined4 *)(unaff_RDI + 1) = uStack_40;
      *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_3c;
      if (plVar4 != (longlong *)0x0) {
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
      if (*unaff_RDI != 0) {
        return;
      }
      FUN_00925fd0();
      uVar8 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual pace::SharedSignedDigest_T pace::OsSignatureMac::computeMatchingDigestForVerify(const pace::eden::thrift::pub::SignedDigest &)"
                           ,0x372);
      FUN_009bd5cb(uVar5,uVar8);
      return;
    }
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0x121;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x130);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab829f;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab829f;
    FUN_00ab88e4(param_2,uVar5);
  }
LAB_00ab830d:
  plVar4 = (longlong *)unaff_RDI[1];
  *(undefined4 *)unaff_RDI = local_48;
  *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_44;
  *(undefined4 *)(unaff_RDI + 1) = uStack_40;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_3c;
  if (plVar4 != (longlong *)0x0) {
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
  return;
}




// ============================================================
// @00ab6efc — 1063 bytes
// str: ""OsSignatureMac::getAllCdHashes - Could not get the kSecCodeInfoDigestAlgorithms array.""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac"
// str: ""void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)""
// str: ""OsSignatureMac::getAllCdHashes - Could not get the kSecCodeInfoCdHashes array.""
// str: ""OsSignatureMac::getAllCdHashes - Could not access the SecCodeInfo digest algorithm at index %d.""
// ============================================================

void FUN_00ab6efc(longlong *param_1,undefined8 param_2,undefined8 **param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  size_t sVar7;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  
  plVar6 = *(longlong **)(unaff_RDI + 0x50);
  while (plVar2 = plVar6, plVar2 != (longlong *)(unaff_RDI + 0x58)) {
    local_64 = (undefined4)plVar2[4];
    cVar3 = _CFDictionaryGetValueIfPresent(param_1,&local_60);
    if (cVar3 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x1ea);
      FUN_009bd5cb();
    }
    cVar3 = _CFDictionaryGetValueIfPresent();
    if (cVar3 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x1f1);
      FUN_009bd5cb();
    }
    local_b0 = local_60;
    local_a8 = _CFArrayGetCount();
    local_88 = &local_80;
    pcVar5 = (char *)0x0;
    local_78 = 0;
    local_80 = 0;
    local_58 = 0;
    if (0 < local_a8) {
      do {
        sVar7 = (size_t)param_3;
        lVar4 = _CFArrayGetValueAtIndex();
        if (lVar4 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x203
                      );
          FUN_009bd5cb();
        }
        local_70 = 0;
        cVar3 = _CFNumberGetValue();
        if (cVar3 == '\0') {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x20c
                      );
          FUN_009bd5cb();
        }
        lVar4 = _CFArrayGetValueAtIndex();
        if (lVar4 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x213
                      );
          FUN_009bd5cb();
        }
        _CFDataGetLength();
        FUN_009543d0();
        _CFDataGetBytePtr();
        _memcpy(pcVar5,local_40 + -(longlong)local_48,sVar7);
        local_b8 = local_70;
        local_90 = &local_b8;
        param_3 = &local_50;
        lVar4 = FUN_00abb812(&local_90,&DAT_023d3e9b);
        pcVar5 = (char *)&local_48;
        if ((code **)pcVar5 != (code **)(lVar4 + 0x28)) {
          FUN_009ad770(pcVar5,local_40);
        }
        if (local_48 != (code *)0x0) {
          local_40 = local_48;
          operator_delete(pcVar5);
        }
        local_58 = local_58 + 1;
      } while (local_58 < local_a8);
    }
    local_48 = (code *)&local_64;
    param_3 = &local_90;
    lVar4 = FUN_00abb978(&local_48,&DAT_023d3e9b);
    if (&local_88 != (undefined8 **)(lVar4 + 0x28)) {
      FUN_00abba68(&local_88,&local_80);
    }
    FUN_00abb7be();
    plVar1 = (longlong *)plVar2[1];
    if ((longlong *)plVar2[1] == (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[2];
      param_1 = (longlong *)0x0;
      if (*(longlong **)plVar2[2] != plVar2) {
        do {
          plVar2 = (longlong *)plVar2[2];
          plVar6 = (longlong *)plVar2[2];
          param_1 = plVar2;
        } while (*(longlong **)plVar2[2] != plVar2);
      }
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (longlong *)*plVar6;
      } while (plVar1 != (longlong *)0x0);
      param_1 = (longlong *)0x0;
    }
  }
  return;
}




// ============================================================
// @00abe77b — 1030 bytes
// str: ""What? We got a zero MAC address!""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/G"
// str: ""vector<uint8_t> pace::GetPrimaryMACAddress()""
// str: ""IOEthernetInterface""
// str: ""Couldn't find a service matching kIOEthernetInterfaceClass.""
// ============================================================

longlong * FUN_00abe77b(undefined8 param_1)

{
  undefined8 uVar1;
  size_t sVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *unaff_RDI;
  longlong local_88;
  longlong local_80;
  byte *local_70;
  code *local_68;
  code *local_60;
  char *local_58;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  byte local_31;
  
  local_70 = (byte *)((ulonglong)local_70 & 0xffffffffffffff00);
  FUN_0094fbb0(param_1,&local_70);
  local_70 = (byte *)((ulonglong)local_70 & 0xffffffffffffff00);
  FUN_0094fbb0();
  lVar4 = _IOServiceMatching();
  if (lVar4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0x8b);
    FUN_009cbbdb();
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_024a98d8;
  lVar4 = _CFDictionaryCreateMutable
                    (PTR__kCFTypeDictionaryValueCallBacks_024a9908,
                     PTR__kCFTypeDictionaryKeyCallBacks_024a9900);
  if (lVar4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0xa6);
    FUN_009cbbdb();
  }
  _CFDictionarySetValue();
  _CFDictionarySetValue();
  _CFRelease();
  sVar2 = (size_t)&local_4c;
  local_3c = _IOServiceGetMatchingServices();
  if (local_3c != 0) {
    FUN_00925fd0();
    sVar2 = FUN_00926010();
    local_70 = (byte *)&local_3c;
    local_68 = FUN_009cac80;
    local_60 = FUN_009cefa0;
    FUN_00983230();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0xb7);
    FUN_009cbbdb();
  }
  local_38 = local_4c;
  pcVar5 = (char *)*unaff_RDI;
  local_31 = (char)(int)unaff_RDI[1] - (char)pcVar5;
  local_40 = 5;
  local_58 = pcVar5;
  if (local_31 < 6) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = &local_31;
    local_68 = FUN_0094fb68;
    local_60 = FUN_0094fb6e;
    FUN_00983230();
    pcVar5 = "void pace::GetMACAddress(io_iterator_t, UInt8 *, UInt8)";
    sVar2 = 199;
    FUN_00928ab0();
    FUN_009cd338();
  }
  _bzero(pcVar5,sVar2);
  while( true ) {
    iVar3 = _IOIteratorNext();
    if (iVar3 == 0) break;
    local_40 = _IORegistryEntryGetParentEntry();
    if (local_40 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = (byte *)&local_40;
      local_68 = FUN_009cac80;
      local_60 = FUN_009cefa0;
      FUN_00983230();
      FUN_00928ab0("void pace::GetMACAddress(io_iterator_t, UInt8 *, UInt8)",0xe7);
      FUN_009cbbdb();
    }
    iVar3 = local_3c;
    lVar4 = _IORegistryEntryCreateCFProperty(0,uVar1);
    if (lVar4 != 0) {
      _CFDataGetBytes(local_58,6);
      _CFRelease();
    }
    if (iVar3 != 0) {
      _IOObjectRelease();
    }
    _IOObjectRelease();
  }
  pcVar5 = (char *)(local_80 - local_88);
  if (pcVar5 == (char *)(unaff_RDI[1] - *unaff_RDI)) {
    if (local_88 != local_80) {
      pcVar6 = (char *)0x0;
      do {
        if (pcVar6[local_88] != pcVar6[*unaff_RDI]) goto LAB_00abeb50;
        pcVar6 = pcVar6 + 1;
      } while (pcVar5 != pcVar6);
    }
    FUN_00925fd0();
    FUN_00926010();
    pcVar5 = "vector<uint8_t> pace::GetPrimaryMACAddress()";
    FUN_00928ab0("vector<uint8_t> pace::GetPrimaryMACAddress()",0x139);
    FUN_009cbbdb();
  }
LAB_00abeb50:
  if (local_38 != 0) {
    _IOObjectRelease();
  }
  if (local_88 != 0) {
    operator_delete(pcVar5);
  }
  return unaff_RDI;
}




// ============================================================
// @00abcd74 — 1013 bytes
// ============================================================

undefined8 FUN_00abcd74(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = (*(code *)*param_1)();
  cVar6 = (*(code *)*param_1)();
  if (cVar5 == '\0') {
    if (cVar6 == '\0') {
      return 0;
    }
    puVar1 = (undefined8 *)(unaff_RSI + 8);
    uVar2 = *(undefined8 *)(unaff_RSI + 8);
    uVar3 = *(undefined8 *)(unaff_RSI + 0x10);
    if (*(longlong *)(unaff_RSI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (*(code *)*param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *(undefined8 *)(unaff_RDI + 8);
    uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *puVar1;
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(unaff_RSI + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
  }
  else {
    if (cVar6 != '\0') {
      uVar2 = *(undefined8 *)(unaff_RDI + 8);
      uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
      if (*(longlong *)(unaff_RDI + 0x20) != 0) {
        _CFRetain();
      }
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(unaff_RDI + 8) = uVar4;
      FUN_00abdcf0();
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(undefined8 *)(param_2 + 8) = uVar2;
      FUN_00abdcf0();
      FUN_00abb66e();
      return 1;
    }
    uVar2 = *(undefined8 *)(unaff_RDI + 8);
    uVar3 = *(undefined8 *)(unaff_RDI + 0x10);
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
    *(undefined8 *)(unaff_RDI + 8) = uVar4;
    FUN_00abdcf0();
    puVar1 = (undefined8 *)(unaff_RSI + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (*(code *)*param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *puVar1;
    uVar3 = *(undefined8 *)(unaff_RSI + 0x10);
    if (*(longlong *)(unaff_RSI + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
  }
  FUN_00abb66e();
  return 2;
}




// ============================================================
// @00aba092 — 923 bytes
// ============================================================

void FUN_00aba092(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RDI;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 local_38;
  
  if ((ulonglong)unaff_RDI[4] < 0x200) {
    lVar3 = unaff_RDI[3];
    uVar5 = unaff_RDI[2] - unaff_RDI[1] >> 3;
    lVar6 = lVar3 - *unaff_RDI;
    if ((ulonglong)(lVar6 >> 3) <= uVar5) {
      uVar12 = 1;
      if (lVar6 != 0) {
        uVar12 = lVar6 >> 2;
      }
      if (uVar12 >> 0x3d == 0) {
        pvVar1 = operator_new(0);
        pvVar11 = (void *)((longlong)pvVar1 + uVar5 * 8);
        operator_new((ulong)pvVar11);
        FUN_00aba724();
        for (lVar3 = unaff_RDI[2]; lVar3 != unaff_RDI[1]; lVar3 = lVar3 + -8) {
          FUN_00aba888();
        }
        lVar3 = *unaff_RDI;
        *unaff_RDI = (longlong)pvVar1;
        unaff_RDI[1] = (longlong)pvVar11;
        pvVar9 = (void *)unaff_RDI[2];
        unaff_RDI[2] = (longlong)pvVar11;
        unaff_RDI[3] = (longlong)((longlong)pvVar1 + uVar12 * 8);
        if (lVar3 == 0) {
          return;
        }
        operator_delete(pvVar9);
        return;
      }
LAB_00aba428:
                    /* WARNING: Subroutine does not return */
      FUN_00ab9d40();
    }
    if (lVar3 != unaff_RDI[2]) {
      operator_new((ulong)lVar3);
      FUN_00aba478();
      return;
    }
    operator_new((ulong)lVar3);
    FUN_00aba5dc();
    puVar10 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar13 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (undefined8 *)unaff_RDI[3]) goto LAB_00aba411;
    puVar8 = (undefined8 *)*unaff_RDI;
    lVar3 = (longlong)puVar13 - (longlong)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = unaff_RDI[3] - (longlong)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((ulonglong)pvVar1 >> 0x3d != 0) goto LAB_00aba428;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (undefined8 *)((longlong)pvVar2 + ((ulonglong)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((longlong)pvVar2 + (longlong)pvVar1 * 8);
      lVar3 = (longlong)puVar10 - (longlong)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)((longlong)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((longlong)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (undefined8 *)((longlong)pvVar2 + lVar6 + ((ulonglong)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
        goto LAB_00aba3e0;
      }
      goto LAB_00aba3ea;
    }
  }
  else {
    unaff_RDI[4] = unaff_RDI[4] - 0x200;
    puVar10 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar13 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (undefined8 *)unaff_RDI[3]) goto LAB_00aba411;
    puVar8 = (undefined8 *)*unaff_RDI;
    lVar3 = (longlong)puVar13 - (longlong)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = unaff_RDI[3] - (longlong)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((ulonglong)pvVar1 >> 0x3d != 0) goto LAB_00aba428;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (undefined8 *)((longlong)pvVar2 + ((ulonglong)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((longlong)pvVar2 + (longlong)pvVar1 * 8);
      lVar3 = (longlong)puVar10 - (longlong)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)((longlong)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((longlong)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (undefined8 *)((longlong)pvVar2 + lVar6 + ((ulonglong)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
LAB_00aba3e0:
        puVar8 = (undefined8 *)*unaff_RDI;
        puVar4 = puVar7;
      }
LAB_00aba3ea:
      *unaff_RDI = (longlong)pvVar2;
      unaff_RDI[1] = (longlong)puVar10;
      unaff_RDI[2] = (longlong)puVar4;
      unaff_RDI[3] = (longlong)pvVar9;
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(pvVar11);
        puVar4 = (undefined8 *)unaff_RDI[2];
      }
      goto LAB_00aba411;
    }
  }
  lVar3 = ((lVar3 >> 3) + 1) - ((lVar3 >> 3) + 1 >> 0x3f) >> 1;
  pvVar11 = (void *)((longlong)puVar10 - (longlong)puVar13);
  puVar4 = puVar13;
  if (pvVar11 != (void *)0x0) {
    _memmove((void *)-lVar3,pvVar11,param_3);
    puVar4 = (undefined8 *)unaff_RDI[1];
  }
  unaff_RDI[2] = (longlong)(puVar13 + (((longlong)pvVar11 >> 3) - lVar3));
  unaff_RDI[1] = (longlong)(puVar4 + -lVar3);
  puVar4 = puVar13 + (((longlong)pvVar11 >> 3) - lVar3);
LAB_00aba411:
  *puVar4 = local_38;
  unaff_RDI[2] = unaff_RDI[2] + 8;
  return;
}




// ============================================================
// @00abd489 — 900 bytes
// ============================================================

int FUN_00abd489(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  iVar7 = FUN_00abd1ab(param_1,param_2,param_4);
  cVar6 = (*(code *)*param_4)();
  if (cVar6 != '\0') {
    puVar1 = (undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      _CFRetain();
    }
    uVar5 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *puVar1 = uVar5;
    FUN_00abdcf0();
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    *(undefined8 *)(param_3 + 8) = uVar3;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar6 = (*(code *)*param_4)();
    if (cVar6 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      puVar2 = (undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        _CFRetain();
      }
      uVar5 = *puVar1;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *puVar2 = uVar5;
      FUN_00abdcf0();
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *puVar1 = uVar3;
      FUN_00abdcf0();
      FUN_00abb66e();
      cVar6 = (*(code *)*param_4)();
      if (cVar6 == '\0') {
        iVar7 = iVar7 + 2;
      }
      else {
        puVar1 = (undefined8 *)(unaff_RSI + 8);
        uVar3 = *(undefined8 *)(unaff_RSI + 8);
        uVar4 = *(undefined8 *)(unaff_RSI + 0x10);
        if (*(longlong *)(unaff_RSI + 0x20) != 0) {
          _CFRetain();
        }
        uVar5 = *puVar2;
        *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *puVar1 = uVar5;
        FUN_00abdcf0();
        *(undefined8 *)(param_2 + 0x10) = uVar4;
        *puVar2 = uVar3;
        FUN_00abdcf0();
        FUN_00abb66e();
        cVar6 = (*(code *)*param_4)();
        if (cVar6 == '\0') {
          iVar7 = iVar7 + 3;
        }
        else {
          uVar3 = *(undefined8 *)(unaff_RDI + 8);
          uVar4 = *(undefined8 *)(unaff_RDI + 0x10);
          if (*(longlong *)(unaff_RDI + 0x20) != 0) {
            _CFRetain();
          }
          uVar5 = *puVar1;
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
          *(undefined8 *)(unaff_RDI + 8) = uVar5;
          FUN_00abdcf0();
          *(undefined8 *)(unaff_RSI + 0x10) = uVar4;
          *puVar1 = uVar3;
          FUN_00abdcf0();
          FUN_00abb66e();
          iVar7 = iVar7 + 4;
        }
      }
    }
  }
  return iVar7;
}




// ============================================================
// @00ac0de2 — 825 bytes
// str: ""The image is too small to be a valid Mach-O binary: %ld""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/S"
// str: ""void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)""
// str: ""Could not find a valid fat or Mach-O header.""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac0de2(void *param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  char *pcVar12;
  void *pvVar13;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
  *(undefined8 *)(unaff_RDI + 0x28) = *(undefined8 *)(unaff_RDI + 0x20);
  *(undefined8 *)(unaff_RDI + 0x38) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x40);
  *(undefined8 *)(unaff_RDI + 0x40) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x18);
  *(undefined8 *)(unaff_RDI + 0x18) = 0;
  if (lVar3 != 0) {
    operator_delete(param_1);
  }
  pcVar12 = (char *)*unaff_RSI;
  lVar3 = unaff_RSI[1];
  if (lVar3 != 0) {
    LOCK();
    *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(char **)(unaff_RDI + 8) = pcVar12;
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  *(longlong *)(unaff_RDI + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar7 = (**(code **)(**(longlong **)(unaff_RDI + 8) + 0x10))();
  if (uVar7 < 8) {
    FUN_00925fd0();
    uVar8 = FUN_00926010();
    FUN_00983230();
    pcVar12 = "void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)";
    uVar14 = FUN_00928ab0("void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)"
                          ,0x56);
    FUN_009cbbdb(uVar14,uVar8);
  }
  piVar9 = (int *)(**(code **)(**(longlong **)(unaff_RDI + 8) + 0x18))();
  if ((*piVar9 == -0x35014542) || (*piVar9 == -0x41450136)) {
    puVar10 = operator_new((ulong)pcVar12);
    lVar3 = *(longlong *)(unaff_RDI + 0x18);
    *(undefined8 **)(unaff_RDI + 0x18) = puVar10;
    if (lVar3 != 0) {
      operator_delete(pcVar12);
      puVar10 = *(undefined8 **)(unaff_RDI + 0x18);
    }
    *puVar10 = *(undefined8 *)piVar9;
    iVar2 = *piVar9;
    pvVar13 = *(void **)(unaff_RDI + 0x18);
    uVar6 = *(uint *)((longlong)pvVar13 + 4);
    if (iVar2 == -0x41450136) {
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      *(uint *)((longlong)pvVar13 + 4) = uVar6;
    }
    if (uVar6 == 0) {
      return;
    }
    FUN_00ac13be();
    _memcpy(pvVar13,(void *)((ulonglong)*(uint *)(*(longlong *)(unaff_RDI + 0x18) + 4) * 0x14),
            param_3);
    auVar15 = _DAT_023e0070;
    if (iVar2 != -0x41450136) {
      return;
    }
    pauVar5 = *(undefined1 (**) [16])(unaff_RDI + 0x28);
    for (pauVar11 = *(undefined1 (**) [16])(unaff_RDI + 0x20); pauVar11 != pauVar5;
        pauVar11 = (undefined1 (*) [16])(pauVar11[1] + 4)) {
      auVar16 = pshufb(*pauVar11,auVar15);
      *pauVar11 = auVar16;
      uVar6 = *(uint *)pauVar11[1];
      *(uint *)pauVar11[1] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    }
    return;
  }
  piVar9 = (int *)(**(code **)(**(longlong **)(unaff_RDI + 8) + 0x18))();
  iVar2 = *piVar9;
  if (iVar2 < -0x1120532) {
    if (iVar2 != -0x31051202) {
      if (iVar2 != -0x30051202) {
LAB_00ac10ce:
        FUN_00925fd0();
        uVar8 = FUN_00926010();
        uVar14 = FUN_00928ab0("void pace::SimpleMachOBinary::initWithBinaryImage(pace::SharedBinaryImage_T)"
                              ,0x9c);
        FUN_009cbbdb(uVar14,uVar8);
        return;
      }
LAB_00ac105c:
      pauVar11 = operator_new((ulong)pcVar12);
      lVar3 = *(longlong *)(unaff_RDI + 0x40);
      *(undefined1 (**) [16])(unaff_RDI + 0x40) = pauVar11;
      if (lVar3 != 0) {
        operator_delete(pcVar12);
        pauVar11 = *(undefined1 (**) [16])(unaff_RDI + 0x40);
      }
      *(undefined8 *)(pauVar11[1] + 8) = *(undefined8 *)(piVar9 + 6);
      *(undefined8 *)pauVar11[1] = *(undefined8 *)(piVar9 + 4);
      uVar8 = *(undefined8 *)piVar9;
      *(undefined8 *)(*pauVar11 + 8) = *(undefined8 *)(piVar9 + 2);
      *(undefined8 *)*pauVar11 = uVar8;
      if (*piVar9 != -0x30051202) {
        return;
      }
      goto LAB_00ac10a3;
    }
  }
  else {
    if (iVar2 == -0x1120531) goto LAB_00ac105c;
    if (iVar2 != -0x1120532) goto LAB_00ac10ce;
  }
  pauVar11 = operator_new((ulong)pcVar12);
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
  *(undefined1 (**) [16])(unaff_RDI + 0x38) = pauVar11;
  if (lVar3 != 0) {
    operator_delete(pcVar12);
    pauVar11 = *(undefined1 (**) [16])(unaff_RDI + 0x38);
  }
  *(int *)(pauVar11[1] + 8) = piVar9[6];
  *(undefined8 *)pauVar11[1] = *(undefined8 *)(piVar9 + 4);
  uVar8 = *(undefined8 *)piVar9;
  *(undefined8 *)(*pauVar11 + 8) = *(undefined8 *)(piVar9 + 2);
  *(undefined8 *)*pauVar11 = uVar8;
  if (*piVar9 != -0x31051202) {
    return;
  }
LAB_00ac10a3:
  auVar15 = pshufb(*pauVar11,_DAT_023e0070);
  *pauVar11 = auVar15;
  uVar6 = *(uint *)pauVar11[1];
  *(uint *)pauVar11[1] =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar6 = *(uint *)(pauVar11[1] + 4);
  *(uint *)(pauVar11[1] + 4) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar6 = *(uint *)(pauVar11[1] + 8);
  *(uint *)(pauVar11[1] + 8) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  return;
}




// ============================================================
// @00ac71d0 — 788 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac71d0(ulong param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 uVar9;
  ushort local_d4;
  
  if ((*unaff_RSI & 1) == 0) {
    iVar2 = _lstat_INODE64();
  }
  else {
    iVar2 = _lstat_INODE64();
  }
  if (iVar2 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      if ((DAT_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar8 = (local_d4 & 0xf000) - 0x1000 >> 0xc;
    uVar7 = 0xffff;
    uVar9 = 10;
    if (uVar8 < 0xc) {
      uVar6 = (uint)local_d4;
      switch(uVar8) {
      case 0:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 7;
        break;
      case 1:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 6;
        break;
      case 3:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 3;
        break;
      case 5:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 5;
        break;
      case 7:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 2;
        break;
      case 9:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 4;
        break;
      case 0xb:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 8;
      }
    }
  }
  else {
    piVar4 = ___error();
    iVar2 = *piVar4;
    if (param_2 != (int *)0x0) {
      if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        param_1 = 0x2520080;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *param_2 = iVar2;
      uVar1 = (**(code **)(DAT_02754560 + 0x30))();
      *(undefined1 *)(param_2 + 1) = uVar1;
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar7 = 0;
    uVar9 = 1;
    if ((iVar2 != 2) && (iVar2 != 0x14)) {
      if (param_2 == (int *)0x0) {
        ___cxa_allocate_exception();
        puVar5 = operator_new(param_1);
        puVar5[2] = 0x75746174733a3a6d;
        puVar5[1] = 0x6574737973656c69;
        *puVar5 = 0x663a3a74736f6f62;
        *(undefined2 *)(puVar5 + 3) = 0x73;
        if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        uVar1 = (**(code **)(DAT_02754560 + 0x30))();
        uVar9 = FUN_00ac4640((ulonglong)CONCAT14(uVar1,iVar2));
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar9,FUN_00ac46f0);
      }
      uVar7 = 0xffff;
      uVar9 = 0;
    }
  }
  *unaff_RDI = uVar9;
  unaff_RDI[1] = uVar7;
  return;
}




// ============================================================
// @00ac92d0 — 775 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac92d0(undefined8 param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 uVar9;
  ushort local_d4;
  
  if ((*unaff_RSI & 1) == 0) {
    iVar2 = _stat_INODE64();
  }
  else {
    iVar2 = _stat_INODE64();
  }
  if (iVar2 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      if ((DAT_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar8 = (local_d4 & 0xf000) - 0x1000 >> 0xc;
    uVar7 = 0xffff;
    uVar9 = 10;
    if (uVar8 < 0xc) {
      uVar6 = (uint)local_d4;
      switch(uVar8) {
      case 0:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 7;
        break;
      case 1:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 6;
        break;
      case 3:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 3;
        break;
      case 5:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 5;
        break;
      case 7:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 2;
        break;
      case 0xb:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 8;
      }
    }
  }
  else {
    piVar4 = ___error();
    iVar2 = *piVar4;
    if (param_2 != (int *)0x0) {
      if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *param_2 = iVar2;
      uVar1 = (**(code **)(DAT_02754560 + 0x30))();
      *(undefined1 *)(param_2 + 1) = uVar1;
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar7 = 0;
    uVar9 = 1;
    if ((iVar2 != 2) && (iVar2 != 0x14)) {
      if (param_2 == (int *)0x0) {
        ___cxa_allocate_exception();
        puVar5 = operator_new(uVar7);
        puVar5[2] = 0x75746174733a3a6d;
        puVar5[1] = 0x6574737973656c69;
        *puVar5 = 0x663a3a74736f6f62;
        *(undefined2 *)(puVar5 + 3) = 0x73;
        if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        uVar1 = (**(code **)(DAT_02754560 + 0x30))();
        uVar9 = FUN_00ac4640((ulonglong)CONCAT14(uVar1,iVar2));
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar9,FUN_00ac46f0);
      }
      uVar7 = 0xffff;
      uVar9 = 0;
    }
  }
  *unaff_RDI = uVar9;
  unaff_RDI[1] = uVar7;
  return;
}




// ============================================================
// @00ab85e2 — 741 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ab8892) */
/* WARNING: Removing unreachable block (ram,0x00ab88a4) */

longlong * FUN_00ab85e2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if ((DAT_028a0a78 != '\0') && (lVar3 = *(longlong *)(unaff_RSI + 0x70), lVar3 != 0)) {
    lVar5 = unaff_RSI + 0x70;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != unaff_RSI + 0x70) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      if (*(longlong **)(lVar5 + 0x28) != (longlong *)(lVar5 + 0x30)) {
        plVar7 = *(longlong **)(lVar5 + 0x28);
        do {
          pvVar6 = (void *)(ulonglong)(uint)((int)plVar7[6] - (int)plVar7[5]);
          lVar3 = param_1 + 0xf8;
          FUN_00ab94d4(pvVar6,plVar7[5],param_1 + 0xf8,param_1 + 0x40,1);
          if ((*(longlong *)(lVar5 + 0x38) == 1) ||
             (iVar2 = _memcmp(pvVar6,(void *)(*(longlong *)(param_1 + 0x120) -
                                             *(longlong *)(param_1 + 0x118)),(size_t)lVar3),
             iVar2 == 0)) {
            if (uStack_40 != (longlong *)0x0) {
              LOCK();
              uStack_40[1] = uStack_40[1] + 1;
              UNLOCK();
            }
            *unaff_RDI = local_48;
            plVar7 = (longlong *)unaff_RDI[1];
            unaff_RDI[1] = (longlong)uStack_40;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar7 + 0x10))();
                std::__shared_weak_count::__release_weak();
              }
            }
            if (uStack_40 != (longlong *)0x0) {
              LOCK();
              plVar7 = uStack_40 + 1;
              lVar3 = *plVar7;
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*uStack_40 + 0x10))();
                std::__shared_weak_count::__release_weak();
              }
            }
            break;
          }
          if (uStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_40 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*uStack_40 + 0x10))();
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar1 = (longlong *)plVar7[1];
          if ((longlong *)plVar7[1] == (longlong *)0x0) {
            plVar4 = (longlong *)plVar7[2];
            if ((longlong *)*plVar4 != plVar7) {
              do {
                plVar7 = (longlong *)plVar7[2];
                plVar4 = (longlong *)plVar7[2];
              } while ((longlong *)*plVar4 != plVar7);
            }
          }
          else {
            do {
              plVar4 = plVar1;
              plVar1 = (longlong *)*plVar4;
            } while ((longlong *)*plVar4 != (longlong *)0x0);
          }
          plVar7 = plVar4;
        } while (plVar4 != (longlong *)(lVar5 + 0x30));
        if (*unaff_RDI != 0) {
          return unaff_RDI;
        }
      }
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x58);
  if (lVar3 != 0) {
    lVar5 = unaff_RSI + 0x58;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != unaff_RSI + 0x58) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      FUN_00ab9774(*(undefined8 *)PTR__kSecCodeInfoUnique_024a9988,*(undefined8 *)(lVar5 + 0x40),
                   param_1 + 0xf8,param_1 + 0x40);
      plVar7 = (longlong *)unaff_RDI[1];
      *(undefined4 *)unaff_RDI = (undefined4)local_48;
      *(undefined4 *)((longlong)unaff_RDI + 4) = local_48._4_4_;
      *(undefined4 *)(unaff_RDI + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_40._4_4_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  return unaff_RDI;
}




// ============================================================
// @00abf8bb — 739 bytes
// str: "".framework""
// str: ""Versions""
// ============================================================

bool FUN_00abf8bb(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  locale *this;
  undefined1 *unaff_RSI;
  bool bVar5;
  byte local_d0;
  byte local_a8;
  uint local_90;
  byte local_78;
  string local_60 [24];
  uint local_48 [6];
  
  if ((DAT_028a0ac8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    FUN_00abfcb8();
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 0;
  }
  bVar5 = false;
  FUN_00ac92d0();
  if (local_48[0] == 3) {
    FUN_00ac9650();
    FUN_00ac86a0();
    psVar4 = local_60;
    this = (locale *)0x0;
    FUN_00ac67c0();
    std::string::string((string *)this,psVar4);
    if ((local_48[0] & 1) != 0) {
      operator_delete(this);
    }
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(this);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(this);
    }
    std::string::string((string *)this,psVar4);
    psVar4 = (string *)_CFStringCreateWithCString();
    if ((local_a8 & 1) != 0) {
      operator_delete(this);
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    cVar1 = (*(code *)PTR__objc_msgSend_024a9998)();
    bVar5 = cVar1 != '\0';
    FUN_00aca130();
    std::string::string((string *)this,psVar4);
    if ((local_48[0] & 1) != 0) {
      operator_delete(this);
    }
    psVar4 = (string *)local_48;
    std::locale::locale(this);
    cVar2 = FUN_009f1787();
    std::locale::~locale(this);
    if (cVar2 != '\0') {
      FUN_00abfcb8();
      std::string::string((string *)this,psVar4);
      std::string::string((string *)this,psVar4);
      FUN_00ac9740();
      if ((local_90 & 1) != 0) {
        operator_delete(this);
      }
      FUN_00ac92d0();
      this = (locale *)(ulonglong)local_90;
      bVar5 = 1 < local_90 || cVar1 != '\0';
      if ((1 < local_90) && (unaff_RSI != (undefined1 *)0x0)) {
        *unaff_RSI = 1;
        bVar5 = true;
      }
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(this);
      }
      if ((local_48[0] & 1) != 0) {
        operator_delete(this);
      }
    }
    if ((local_78 & 1) != 0) {
      operator_delete(this);
    }
    FUN_00a00c58();
    if ((local_d0 & 1) != 0) {
      operator_delete(this);
    }
  }
  return bVar5;
}




// ============================================================
// @00ab4f34 — 727 bytes
// ============================================================

void FUN_00ab4f34(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252ad80;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  this = (string *)(unaff_RDI + 6);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x17] = 0;
  ___bzero();
  *(undefined2 *)((longlong)unaff_RDI + 0x171) = 0x101;
  *(undefined8 *)((longlong)unaff_RDI + 0x173) = 0x100000100000000;
  *(undefined8 *)((longlong)unaff_RDI + 0x17b) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x183) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 9) = *(undefined4 *)(unaff_RSI + 9);
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = *(undefined4 *)((longlong)unaff_RSI + 0x4c);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x11) = *(undefined1 *)(unaff_RSI + 0x11);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[0x13];
    FUN_008df080();
  }
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x18) = *(undefined4 *)(unaff_RSI + 0x18);
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = *(undefined4 *)((longlong)unaff_RSI + 0xc4);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RSI + 0x30);
  uVar1 = unaff_RSI[0x2e];
  unaff_RDI[0x2f] = unaff_RSI[0x2f];
  unaff_RDI[0x2e] = uVar1;
  return;
}




// ============================================================
// @00ab628a — 725 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ab6508) */
/* WARNING: Removing unreachable block (ram,0x00ab653e) */

undefined8 FUN_00ab628a(string *param_1,string *param_2,byte *param_3,byte *param_4)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  string *psVar4;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_res8;
  byte local_e0;
  uint local_c8;
  byte local_68;
  byte local_50;
  undefined7 uStack_4f;
  string *local_48;
  undefined8 local_40;
  
  if (param_3 != (byte *)0x0) {
    std::string::operator=(param_1,param_2);
  }
  if (param_4 != (byte *)0x0) {
    std::string::operator=(param_1,param_2);
  }
  if (local_res8 != 0) {
    std::string::operator=(param_1,param_2);
  }
  if (*(longlong *)(unaff_RSI + 0x40) != 0) {
    std::string::string(param_1,param_2);
    iVar2 = FUN_00ac9910();
    if ((local_68 & 1) != 0) {
      operator_delete(param_1);
    }
    if (iVar2 == 0) goto LAB_00ab639d;
  }
  pvVar3 = operator_new((ulong)param_1);
  param_1 = (string *)0x0;
  FUN_00a13996(0,0,1);
  plVar1 = *(longlong **)(unaff_RSI + 0x40);
  *(void **)(unaff_RSI + 0x40) = pvVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
LAB_00ab639d:
  FUN_00a14b14();
  FUN_00a14042();
  psVar4 = (string *)0x0;
  FUN_00ac92d0();
  if (local_c8 < 2) {
    std::string::operator=(param_1,psVar4);
  }
  else {
    std::string::operator=(param_1,psVar4);
  }
  FUN_00ab6118();
  std::string::string(param_1,psVar4);
  std::string::string(param_1,psVar4);
  FUN_00ac9740();
  if ((local_50 & 1) != 0) {
    operator_delete(param_1);
  }
  if (param_3 != (byte *)0x0) {
    FUN_00a13d4a();
    if ((*param_3 & 1) != 0) {
      operator_delete(param_1);
    }
    *(undefined8 *)(param_3 + 0x10) = local_40;
    *(string **)(param_3 + 8) = local_48;
    *(ulonglong *)param_3 = CONCAT71(uStack_4f,local_50);
    param_1 = local_48;
  }
  if (param_4 != (byte *)0x0) {
    psVar4 = (string *)0x0;
    FUN_00a147bc();
    if ((*param_4 & 1) != 0) {
      operator_delete(param_1);
    }
    *(undefined8 *)(param_4 + 0x10) = local_40;
    *(string **)(param_4 + 8) = local_48;
    *(ulonglong *)param_4 = CONCAT71(uStack_4f,local_50);
    param_1 = local_48;
  }
  if (local_res8 != 0) {
    std::string::operator=(param_1,psVar4);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(param_1);
  }
  return unaff_RDI;
}




// ============================================================
// @00ab5dcc — 693 bytes
// ============================================================

ulonglong FUN_00ab5dcc(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  longlong *unaff_RDI;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  uVar2 = unaff_RDI[1];
  if (uVar2 < (ulonglong)unaff_RDI[2]) {
    if (uVar2 == unaff_RSI) {
      FUN_008de980();
      unaff_RDI[1] = unaff_RSI + 0x260;
    }
    else {
      FUN_00ab6966(unaff_RSI + 0x260,uVar2);
      FUN_008dea76();
    }
  }
  else {
    if (0x6bca1af286bca1 < ((longlong)(uVar2 - *unaff_RDI) >> 5) * -0x79435e50d79435e5 + 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008e4528(unaff_RDI + 2,((longlong)(unaff_RSI - *unaff_RDI) >> 5) * -0x79435e50d79435e5);
    if (local_48 == local_40) {
      if (local_58 < local_50) {
        for (; local_50 != local_48; local_50 = local_50 + 0x260) {
          FUN_008dea76();
        }
      }
      else {
        uVar2 = 0;
        if (local_40 - local_58 != 0) {
          uVar2 = ((longlong)(local_40 - local_58) >> 5) * 0xd79435e50d79436;
        }
        FUN_008e4528(local_38,uVar2 >> 2);
        if (local_48 - local_50 != 0) {
          lVar1 = ((longlong)(local_48 - local_50) >> 5) * 0x20;
          do {
            FUN_008de980();
            lVar1 = lVar1 + -0x260;
          } while (lVar1 != 0);
        }
        FUN_008e4598();
      }
    }
    FUN_008de980();
    unaff_RSI = FUN_00ab6a2c();
    FUN_008e4598();
  }
  return unaff_RSI;
}




// ============================================================
// @00abd1ab — 683 bytes
// ============================================================

int FUN_00abd1ab(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  iVar7 = FUN_00abcd74(param_3);
  cVar6 = (*(code *)*param_3)();
  if (cVar6 != '\0') {
    puVar1 = (undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x20) != 0) {
      _CFRetain();
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = uVar5;
    FUN_00abdcf0();
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar6 = (*(code *)*param_3)();
    if (cVar6 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      puVar2 = (undefined8 *)(unaff_RSI + 8);
      uVar3 = *(undefined8 *)(unaff_RSI + 8);
      uVar4 = *(undefined8 *)(unaff_RSI + 0x10);
      if (*(longlong *)(unaff_RSI + 0x20) != 0) {
        _CFRetain();
      }
      uVar5 = *puVar1;
      *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *puVar2 = uVar5;
      FUN_00abdcf0();
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *puVar1 = uVar3;
      FUN_00abdcf0();
      FUN_00abb66e();
      cVar6 = (*(code *)*param_3)();
      if (cVar6 == '\0') {
        iVar7 = iVar7 + 2;
      }
      else {
        uVar3 = *(undefined8 *)(unaff_RDI + 8);
        uVar4 = *(undefined8 *)(unaff_RDI + 0x10);
        if (*(longlong *)(unaff_RDI + 0x20) != 0) {
          _CFRetain();
        }
        uVar5 = *puVar2;
        *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
        *(undefined8 *)(unaff_RDI + 8) = uVar5;
        FUN_00abdcf0();
        *(undefined8 *)(unaff_RSI + 0x10) = uVar4;
        *puVar2 = uVar3;
        FUN_00abdcf0();
        FUN_00abb66e();
        iVar7 = iVar7 + 3;
      }
    }
  }
  return iVar7;
}




// ============================================================
// @00ab94d4 — 605 bytes
// ============================================================

void FUN_00ab94d4(ulong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  string *this;
  string *psVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  byte *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_res20;
  undefined4 in_stack_00000028;
  longlong local_1b0;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  pvVar5 = operator_new(param_1);
  FUN_0097c240();
  puVar6 = operator_new(param_1);
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &DAT_0252b020;
  puVar6[3] = pvVar5;
  *unaff_RDI = (longlong)pvVar5;
  plVar3 = (longlong *)unaff_RDI[1];
  unaff_RDI[1] = (longlong)puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar10 = *unaff_RDI;
  *(undefined2 *)(lVar10 + 0x130) = 0x101;
  *(undefined4 *)(lVar10 + 8) = local_res20;
  *(undefined4 *)(lVar10 + 0xc) = in_stack_00000028;
  FUN_0098ede4();
  FUN_0098ef68();
  lVar10 = *unaff_RDI;
  uVar4 = FUN_0098f810();
  uVar9 = (ulonglong)uVar4;
  psVar8 = *(string **)(lVar10 + 0x118);
  uVar7 = *(longlong *)(lVar10 + 0x120) - (longlong)psVar8;
  if (uVar7 < uVar9) {
    FUN_0088d550();
    psVar8 = *(string **)(lVar10 + 0x118);
  }
  else if (uVar9 < uVar7) {
    *(string **)(lVar10 + 0x120) = psVar8 + uVar9;
  }
  this = (string *)0x0;
  (**(code **)(local_1b0 + 0x48))();
  lVar10 = *unaff_RDI;
  *(undefined1 *)(lVar10 + 0x139) = 1;
  if (local_res10 == 0) {
    *(undefined1 *)(lVar10 + 0x132) = 0;
  }
  else {
    *(undefined1 *)(lVar10 + 0x132) = 1;
    std::string::assign((char *)this);
    lVar10 = *unaff_RDI;
  }
  if (local_res18 == 0) {
    *(undefined1 *)(lVar10 + 0x133) = 0;
  }
  else {
    *(undefined1 *)(lVar10 + 0x133) = 1;
    std::string::assign((char *)this);
    lVar10 = *unaff_RDI;
  }
  *(undefined1 *)(lVar10 + 0x134) = 1;
  std::string::operator=(this,psVar8);
  lVar10 = *unaff_RDI;
  if (local_res8 != (byte *)0x0) {
    if ((*local_res8 & 1) == 0) {
      uVar7 = (ulonglong)(*local_res8 >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(local_res8 + 8);
    }
    if (uVar7 != 0) {
      *(undefined1 *)(lVar10 + 0x136) = 1;
      std::string::operator=(this,psVar8);
      lVar10 = *unaff_RDI;
    }
  }
  *(undefined1 *)(lVar10 + 0x110) = 1;
  FUN_008d6858();
  std::string::operator=(this,psVar8);
  *(undefined1 *)(*unaff_RDI + 0x111) = 1;
  std::string::operator=(this,psVar8);
  FUN_0098edfa();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @00ab7e04 — 545 bytes
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac"
// str: ""Result code from SecCodeCopySigningInformation: %ld""
// str: ""bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace"
// str: ""Result code from SecStaticCodeCheckValidity: %ld""
// ============================================================

undefined8 FUN_00ab7e04(undefined1 *param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  iVar1 = _SecStaticCodeCheckValidity(param_1,0);
  if (param_3 != (undefined2 *)0x0) {
    *(int *)(param_3 + 2) = iVar1;
  }
  uVar2 = iVar1 + 0x105f6;
  if (uVar2 < 0x2a) {
    if ((0x20000000182U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = 1;
      }
      if (param_3 == (undefined2 *)0x0) {
        return 0;
      }
      *param_3 = 0x101;
      return 0;
    }
    if ((0x10000000001U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    if (param_3 != (undefined2 *)0x0) {
      *(undefined1 *)param_3 = 1;
    }
    iVar1 = _SecCodeCopySigningInformation();
    if (param_3 != (undefined2 *)0x0) {
      *(int *)(param_3 + 2) = iVar1;
    }
    if (iVar1 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace::eden::DsigStatus_T *)"
                   ,0x3b2);
      FUN_009bd5cb();
    }
    FUN_00ab9238();
    FUN_00abbea2();
    return 1;
  }
  if (DAT_028a0a48 != (undefined8 *)0x0) {
    puVar3 = &DAT_028a0a48;
    puVar4 = DAT_028a0a48;
    do {
      if (iVar1 <= *(int *)((longlong)puVar4 + 0x1c)) {
        puVar3 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[*(int *)((longlong)puVar4 + 0x1c) < iVar1];
    } while (puVar4 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar3 != &DAT_028a0a48) && (*(int *)((longlong)puVar3 + 0x1c) <= iVar1))
       && (*(int *)(puVar3 + 4) == 0)) {
      return 0;
    }
  }
  FUN_00925fd0();
  FUN_00926010();
  FUN_00983230();
  FUN_00928ab0("bool pace::OsSignatureMac::getSigningInfoIfValid(pace::SignedCodePair_T &, const bool, bool *, pace::eden::DsigStatus_T *)"
               ,0x3f9);
  FUN_009bd5cb();
  return 0;
}




// ============================================================
// @00ac099f — 544 bytes
// str: ""Got a NULL from realpath and this path string: \"%s\"""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/P"
// str: ""boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, "
// ============================================================

void FUN_00ac099f(char *param_1,string *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  string *psVar3;
  string *psVar4;
  longlong *unaff_RDI;
  byte local_78;
  undefined7 uStack_77;
  string *local_70;
  longlong local_68;
  byte local_60 [24];
  byte *local_48;
  string *local_40;
  code *local_38;
  
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  psVar3 = param_2;
  FUN_00abe2de();
  std::string::string((string *)param_1,psVar3);
  if (((ulonglong)local_48 & 1) != 0) {
    operator_delete(param_1);
  }
  psVar3 = (string *)0x0;
  FUN_00ac71d0();
  if ((int)local_48 == 4) {
    lVar1 = _realpath_DARWIN_EXTSN();
    plVar2 = operator_new((ulong)param_1);
    psVar4 = (string *)(plVar2 + 1);
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = (longlong)&DAT_0252b070;
    plVar2[3] = lVar1;
    plVar2[4] = (longlong)PTR__free_024a98c0;
    if (lVar1 == 0) {
      FUN_00925fd0();
      psVar3 = (string *)FUN_00926010();
      local_40 = (string *)FUN_009b6370;
      local_38 = FUN_0094ef70;
      local_48 = local_60;
      FUN_00983230();
      param_1 = 
      "boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, boost::filesystem::path *)"
      ;
      FUN_00928ab0("boost::filesystem::path pace::getFrameworkCurrentBinaryParentPath(const boost::filesystem::path &, boost::filesystem::path *)"
                   ,0xf8);
      FUN_009cbbdb();
    }
    FUN_00abfcb8();
    std::string::string((string *)param_1,psVar3);
    if ((local_78 & 1) != 0) {
      operator_delete(param_1);
    }
    FUN_00aca780();
    unaff_RDI[2] = local_68;
    unaff_RDI[1] = (longlong)local_70;
    *unaff_RDI = CONCAT71(uStack_77,local_78);
    if (param_2 != (string *)0x0) {
      std::string::operator=(local_70,psVar3);
    }
    if (((ulonglong)local_48 & 1) != 0) {
      operator_delete(local_70);
    }
    LOCK();
    lVar1 = *(longlong *)psVar4;
    *(longlong *)psVar4 = *(longlong *)psVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  else {
    FUN_00aca780();
    unaff_RDI[2] = (longlong)local_38;
    unaff_RDI[1] = (longlong)local_40;
    *unaff_RDI = (longlong)local_48;
    psVar4 = local_40;
    if (param_2 != (string *)0x0) {
      std::string::operator=(local_40,psVar3);
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(psVar4);
  }
  return;
}




// ============================================================
// @00ab9278 — 543 bytes
// ============================================================

void FUN_00ab9278(longlong *param_1,string *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  string *this;
  string *psVar4;
  int iVar5;
  ulonglong uVar6;
  char unaff_SIL;
  ushort uStack_86;
  ulonglong local_78 [3];
  ulonglong *local_60;
  ulonglong local_58 [3];
  undefined1 local_40 [16];
  
  psVar4 = param_2;
  FUN_0097ffec();
  param_1[2] = 0;
  *param_1 = (longlong)(param_1 + 1);
  param_1[1] = 0;
  this = (string *)local_78;
  local_78[2] = 0;
  local_78[1] = 0;
  local_78[0] = 0;
  if (unaff_SIL == '\0') {
    if (param_2 != (string *)0x0) {
      uVar6 = *(ulonglong *)param_2;
      uVar1 = *(ulonglong *)(param_2 + 8);
      if (uVar6 != uVar1) {
        do {
          FUN_00abeec2();
          this = (string *)0x0;
          lVar3 = FUN_00ac162c(0,0,0);
          if (lVar3 != 0) {
            psVar4 = (string *)&DAT_023d3e9b;
            local_58[0] = uVar6;
            lVar3 = FUN_00abc058(local_58);
            *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
            this = (string *)CONCAT44(0xffffffff,(uint)uStack_86 << 0x10);
            *(string **)(lVar3 + 0x38) = this;
            std::string::operator=(this,psVar4);
          }
          uVar6 = uVar6 + 0x18;
        } while (uVar1 != uVar6);
        goto LAB_00ab9479;
      }
    }
    FUN_008d6858();
    std::string::string(this,psVar4);
    FUN_00abeec2();
    this = (string *)0x0;
    lVar3 = FUN_00ac162c(0,0,0);
    if (lVar3 != 0) {
      psVar4 = (string *)&DAT_023d3e9b;
      local_60 = local_58;
      lVar3 = FUN_00abc058(&local_60,&DAT_023d3e9b,local_40);
      *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
      this = (string *)((ulonglong)CONCAT42(0xffffffff,uStack_86) << 0x10);
      *(string **)(lVar3 + 0x38) = this;
      std::string::operator=(this,psVar4);
    }
    if ((local_58[0] & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    FUN_00ab6e4a();
    iVar2 = FUN_00ac13fc();
    if (iVar2 != 0) {
      iVar5 = 0;
      do {
        FUN_00ac1416(local_40,0,0,0);
        FUN_00abed81();
        psVar4 = (string *)&DAT_023d3e9b;
        local_60 = local_58;
        lVar3 = FUN_00abc058(&local_60);
        *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
        this = (string *)CONCAT44(0xffffffff,(uint)uStack_86 << 0x10);
        *(string **)(lVar3 + 0x38) = this;
        std::string::operator=(this,psVar4);
        if ((local_58[0] & 1) != 0) {
          operator_delete(this);
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
LAB_00ab9479:
  if ((local_78[0] & 1) != 0) {
    operator_delete(this);
  }
  return;
}




// ============================================================
// @00ac1416 — 533 bytes
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/S"
// str: ""The index specified (%ld) is beyond the number of images in the binary (%ld).""
// str: ""void *pace::SimpleMachOBinary::getIndImage(const uint32_t, uint32_t *, cpu_type_t *, bool *, uint32"
// ============================================================

uint * FUN_00ac1416(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar5;
  uint *puVar6;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x18) + 4);
  }
  if (uVar1 <= unaff_ESI) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void *pace::SimpleMachOBinary::getIndImage(const uint32_t, uint32_t *, cpu_type_t *, bool *, uint32_t *) const"
                 ,0xd7);
    FUN_009cbbdb();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar4 == *(longlong *)(unaff_RDI + 0x28)) {
    puVar6 = (uint *)(**(code **)(**(longlong **)(unaff_RDI + 8) + 0x18))();
    uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 8) + 0x10))();
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = uVar2;
    }
    if (((param_1 == (undefined4 *)0x0) && (param_3 == (undefined1 *)0x0)) &&
       (param_4 == (uint *)0x0)) {
      return puVar6;
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x40);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(lVar4 + 4);
    }
    if (param_4 == (uint *)0x0) {
      return puVar6;
    }
    uVar1 = *(uint *)(lVar4 + 0xc);
  }
  else {
    uVar5 = (ulonglong)unaff_ESI;
    lVar3 = (**(code **)(**(longlong **)(unaff_RDI + 8) + 0x18))();
    uVar1 = *(uint *)(lVar4 + 8 + uVar5 * 0x14);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(lVar4 + 0xc + uVar5 * 0x14);
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(lVar4 + uVar5 * 0x14);
    }
    puVar6 = (uint *)(lVar3 + (ulonglong)uVar1);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *puVar6 == 0xcffaedfe || *puVar6 == 0xfeedfacf;
    }
    if (param_4 == (uint *)0x0) {
      return puVar6;
    }
    uVar1 = puVar6[3];
    *param_4 = uVar1;
    if ((*puVar6 | 0x1000000) != 0xcffaedfe) {
      return puVar6;
    }
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *param_4 = uVar1;
  return puVar6;
}




// ============================================================
// @00abeec2 — 525 bytes
// str: ""i386""
// str: ""x86_64""
// str: ""arm64""
// str: ""ppc""
// str: ""ppc64""
// ============================================================

undefined4 FUN_00abeec2(locale *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte local_30;
  char *local_28;
  
  std::locale::locale(param_1);
  FUN_00991334();
  std::locale::~locale(param_1);
  pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((longlong)&MACH_HEADER.cputype + 2)) {
    pcVar2 = "x86_64";
    iVar1 = std::string::compare
                      (0x1fba457,0xffffffff,(char *)((longlong)&MACH_HEADER.cputype + 2),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x1000007;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if ((dword *)pcVar3 == &MACH_HEADER.cputype) {
    pcVar2 = "i386";
    iVar1 = std::string::compare(0x1fba452,0xffffffff,(char *)&MACH_HEADER.cputype,param_4);
    if (iVar1 == 0) {
      uVar4 = 7;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((longlong)&MACH_HEADER.magic + 3)) {
    pcVar2 = "arm";
    iVar1 = std::string::compare
                      (0x1ffd79e,0xffffffff,(char *)((longlong)&MACH_HEADER.magic + 3),param_4);
    if (iVar1 == 0) {
      uVar4 = 0xc;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((longlong)&MACH_HEADER.cputype + 1)) {
    pcVar2 = "arm64";
    iVar1 = std::string::compare
                      (0x1fba45e,0xffffffff,(char *)((longlong)&MACH_HEADER.cputype + 1),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x100000c;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((longlong)&MACH_HEADER.magic + 3)) {
    pcVar2 = "ppc";
    iVar1 = std::string::compare
                      (0x1ffd794,0xffffffff,(char *)((longlong)&MACH_HEADER.magic + 3),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x12;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(ulonglong)(local_30 >> 1);
  }
  if ((local_30 & 1) != 0) {
    pcVar2 = local_28;
  }
  uVar4 = 0;
  if (pcVar2 == (char *)((longlong)&MACH_HEADER.cputype + 1)) {
    pcVar2 = "ppc64";
    iVar1 = std::string::compare
                      (0x1ffd798,0xffffffff,(char *)((longlong)&MACH_HEADER.cputype + 1),param_4);
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar4 = 0x1000012;
    }
  }
LAB_00abf0b5:
  if ((local_30 & 1) != 0) {
    operator_delete(pcVar2);
  }
  return uVar4;
}




// ============================================================
// @00aca130 — 500 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aca130(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined4 extraout_var;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulonglong *unaff_RDI;
  byte local_48;
  undefined1 *puVar4;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (ulong)param_1;
  FUN_00aca7e0();
  if ((DAT_028a0bb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_028a0ba0 = 0x2e02;
    DAT_028a0ba2 = 0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  iVar1 = FUN_00ac9910();
  if (iVar1 != 0) {
    if ((DAT_028a0bd8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      DAT_028a0bc0 = 4;
      _DAT_028a0bc1 = 0x2e2e;
      DAT_028a0bc3 = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    iVar1 = FUN_00ac9910();
    if ((iVar1 != 0) && (lVar3 = std::string::rfind((char)uVar6,0xffffffff), lVar3 != -1)) {
      sVar2 = _strlen((char *)CONCAT44(uVar7,uVar6));
      puVar4 = (undefined1 *)CONCAT44(extraout_var,sVar2);
      if ((undefined1 *)0xffffffffffffffef < puVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar4) {
        pcVar5 = operator_new(uVar6);
        unaff_RDI[2] = (ulonglong)pcVar5;
        *unaff_RDI = (ulonglong)(puVar4 + 0x10) & 0xfffffffffffffff0 | 1;
        unaff_RDI[1] = (ulonglong)puVar4;
      }
      else {
        *(char *)unaff_RDI = (char)sVar2 * '\x02';
        pcVar5 = (char *)((longlong)unaff_RDI + 1);
        if (puVar4 == (undefined1 *)0x0) {
          *pcVar5 = '\0';
          goto joined_r0x00aca26c;
        }
      }
      _memcpy((void *)CONCAT44(uVar7,uVar6),puVar4,param_3);
      pcVar5[(longlong)puVar4] = '\0';
      goto joined_r0x00aca26c;
    }
  }
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
joined_r0x00aca26c:
  if ((local_48 & 1) != 0) {
    operator_delete((void *)CONCAT44(uVar7,uVar6));
  }
  return;
}



