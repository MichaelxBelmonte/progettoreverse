// Function: FUN_00ab7374
// Address: 00ab7374
// Size: 2253 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "Could not allocate a dictionary with the architecture attribute."
//   "virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool,...
//   "Result code from SecStaticCodeCreateWithPathAndAttributes: %ld"
//   "Result code from SecStaticCodeCreateWithPath: %ld"

uint64_t FUN_00ab7374(string *param_1,string *param_2,void****param_3,void****param_4
                      )

{
  void***pppuVar1;
  char cVar2;
  byte bVar3;
  uint32_t uVar4;
  int64_t lVar5;
  void****ppppuVar6;
  ulong uVar7;
  void*puVar8;
  string *this;
  void****ppppuVar9;
  string *psVar10;
  void****ppppuVar11;
  int64_t *this_ptr;
  void****ppppuVar12;
  uint64_t uVar13;
  byte local_158;
  void*local_130;
  byte local_110;
  byte local_f8;
  uint local_e0 [6];
  void*local_c8;
  uint64_t local_c0;
  void***local_b8;
  uint64_t local_b0;
  void*local_a8;
  int64_t local_a0;
  void***local_98;
  void**local_90;
  code *local_88;
  uint32_t local_80;
  int local_7c;
  void***local_78;
  uint32_t local_6c;
  void*local_68;
  int64_t local_60;
  void*local_58;
  uint64_t local_50;
  void**local_48;
  int local_34;
  
  local_6c = SUB84(param_1,0);
  local_34 = 0;
  if (param_3 != (void****)0x0) {
    *(void*)param_3 = 0;
  }
  psVar10 = param_2;
  local_b8 = (void***)param_3;
  if (param_4 != (void****)0x0) {
    FUN_0097ffec();
    param_4[2] = (void***)0x0;
    *param_4 = (void***)(param_4 + 1);
    param_4[1] = (void***)0x0;
  }
  FUN_00ab6db8();
  std::string::string(param_1,psVar10);
  FUN_00ab6e4a();
  std::string::string(param_1,psVar10);
  local_c0 = FUN_00abdd2b();
  local_c8 = &g_025261a8;
  if ((local_110 & 1) != 0) {
    operator_delete(param_1);
  }
  uVar7 = (ulong)param_1;
  local_7c = FUN_00ac13fc();
  local_78 = (void***)0x0;
  if (param_4 == (void****)0x0) {
    local_78 = operator_new(uVar7);
    local_78[2] = (void**)0x0;
    local_78[1] = (void**)0x0;
    *local_78 = (void**)(local_78 + 1);
    local_68 = (void*)0x0;
    FUN_0098003e();
    param_4 = (void****)local_78;
  }
  ppppuVar11 = param_4;
  (**(code **)(*this_ptr + 0x38))();
  if (param_4[2] == (void***)0x0) {
    FUN_0098003e();
    uVar13 = 0;
  }
  else {
    cVar2 = FUN_00abe6af();
    if (cVar2 == '\0') {
      local_68 = &g_0252af40;
      local_58 = &g_0252aff0;
      local_50 = 0;
      pppuVar1 = *param_4;
      local_60 = 0;
      local_34 = _SecStaticCodeCreateWithPath();
      *(int *)((int64_t)pppuVar1 + 0x3c) = local_34;
      if (local_34 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        local_98 = (void***)&local_34;
        local_90 = (void**)FUN_009cac80;
        local_88 = FUN_009cefa0;
        FUN_00983230();
        FUN_00928ab0("virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool, bool *, pace::eden::DsigResultMap_T *)"
                     ,0x2ff);
        FUN_009bd5cb();
      }
      local_48 = (void**)((uint64_t)local_48 & 0xffffffffffffff00);
      uVar4 = FUN_00ab7e04(&local_48,(byte)local_6c,pppuVar1 + 7);
      if (((void****)local_b8 != (void****)0x0) && ((byte)local_48 != 0)) {
        *(void*)local_b8 = 1;
      }
      ppppuVar11 = (void****)local_b8;
      if ((byte)uVar4 != 0) {
        if (local_7c == 1) {
          FUN_00ac1416(local_e0,0,0,0);
        }
        else {
          local_e0[0] = 7;
        }
        local_98 = (void***)local_e0;
        ppppuVar11 = &local_98;
        FUN_00abbed4(ppppuVar11,&g_023d3e9b,&local_a8);
        FUN_00abbfde();
        FUN_00ab9238();
      }
      uVar13 = (uint64_t)CONCAT31((int3)((uint)uVar4 >> 8),(byte)uVar4 & ((byte)local_48 & 1) == 0)
      ;
      FUN_00abbea2();
      FUN_00ab9fd6();
    }
    else {
      if ((g_028a0a79 == '\0') && (cVar2 = FUN_00ad1250(), cVar2 != '\0')) {
        FUN_00ab9f00();
        FUN_00ad1360();
      }
      ppppuVar11 = param_4 + 1;
      if ((void****)*param_4 == ppppuVar11) {
        local_b0 = 0;
        psVar10 = (string *)0x0;
        uVar13 = 0;
        ppppuVar9 = ppppuVar11;
      }
      else {
        local_130 = &g_0252aff0;
        uVar13 = 0;
        psVar10 = (string *)0x0;
        local_b0 = 0;
        ppppuVar12 = (void****)*param_4;
        do {
          std::string::string(psVar10,param_2);
          local_80 = FUN_00abeec2();
          local_68 = &g_0252af40;
          local_60 = 0;
          local_58 = &g_0252aff0;
          local_50 = 0;
          puVar8 = local_130;
          cVar2 = FUN_00abe6ed();
          this = (string *)CONCAT71((int7)((uint64_t)puVar8 >> 8),local_7c != 1);
          if (cVar2 != '\x01' || local_7c != 1) {
LAB_00ab762d:
            std::string::string(this,param_2);
            local_90 = (void**)_CFStringCreateWithCString();
            local_98 = (void***)&g_025203c8;
            if ((local_f8 & 1) != 0) {
              operator_delete(&g_025203c8);
            }
            local_a8 = &g_0252aff0;
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
          *(int *)((int64_t)ppppuVar12 + 0x3c) = local_34;
          if (local_34 != 0) {
            FUN_00925fd0();
            FUN_00926010();
            local_98 = (void***)&local_34;
            local_90 = (void**)FUN_009cac80;
            local_88 = FUN_009cefa0;
            FUN_00983230();
            FUN_00928ab0("virtual bool pace::OsSignatureMac::verify(const bool, const std::vector<std::string> *, const bool, bool *, pace::eden::DsigResultMap_T *)"
                         ,0x2cd);
            FUN_009bd5cb();
          }
          local_48 = (void**)((uint64_t)local_48 & 0xffffffffffffff00);
          param_2 = (string *)(uint64_t)(uVar13 == 0 & (byte)local_6c);
          ppppuVar9 = (void****)&local_48;
          bVar3 = FUN_00ab7e04();
          if ((byte)local_48 == '\0') {
            if (bVar3 != 0) {
              local_98 = (void***)&local_80;
              param_2 = (string *)&g_023d3e9b;
              ppppuVar9 = &local_98;
              FUN_00abbed4();
              FUN_00abbfde();
              FUN_00ab9238();
            }
          }
          else {
            local_b0 = local_b0 + 1;
            if ((void****)local_b8 != (void****)0x0) {
              *(void*)local_b8 = 1;
            }
          }
          FUN_00abbea2();
          FUN_00ab9fd6();
          if ((local_e0[0] & 1) != 0) {
            operator_delete(ppppuVar9);
          }
          ppppuVar9 = (void****)ppppuVar12[1];
          if ((void****)ppppuVar12[1] == (void****)0x0) {
            ppppuVar6 = (void****)ppppuVar12[2];
            if ((void****)*ppppuVar6 != ppppuVar12) {
              do {
                ppppuVar12 = (void****)ppppuVar12[2];
                ppppuVar6 = (void****)ppppuVar12[2];
              } while ((void****)*ppppuVar6 != ppppuVar12);
            }
          }
          else {
            do {
              ppppuVar6 = ppppuVar9;
              ppppuVar9 = (void****)*ppppuVar6;
            } while ((void****)*ppppuVar6 != (void****)0x0);
          }
          uVar13 = uVar13 + 1;
          psVar10 = psVar10 + bVar3;
          ppppuVar9 = (void****)local_e0;
          ppppuVar12 = ppppuVar6;
        } while (ppppuVar6 != ppppuVar11);
      }
      ppppuVar11 = (void****)((uint64_t)psVar10 ^ uVar13 | local_b0);
      uVar13 = CONCAT71((int7)((uint64_t)ppppuVar9 >> 8),ppppuVar11 == (void****)0x0);
    }
    FUN_0098003e();
    if ((g_028a0a78 != '\0') && ((char)uVar13 != '\0')) {
      FUN_00ab6efc();
    }
  }
  FUN_00a153c0();
  if ((local_158 & 1) != 0) {
    operator_delete(ppppuVar11);
  }
  return uVar13 & 0xffffffff;
}

