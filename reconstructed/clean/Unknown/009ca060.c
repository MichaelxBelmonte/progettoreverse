// Function: FUN_009ca060
// Address: 009ca060
// Size: 1659 bytes
// Class: Unknown
// String references:
//   "__FILE__"
//   "__LINE__"
//   "__PRETTY_FUNCTION__"
//   "Filename unknown"
//   ", line "
//   ", line unknown"
//   ", function: "

uint64_t FUN_009ca060(uint64_t param_1,string *param_2,string *param_3,ulong param_4)

{
  string *psVar1;
  string sVar2;
  string *psVar3;
  string *psVar4;
  string *this;
  string *psVar5;
  int64_t lVar6;
  string *psVar7;
  uint64_t uVar8;
  uint64_t this_ptr;
  string *psVar9;
  bool bVar10;
  uint8_t in_stack_ffffffffffffff38;
  undefined7 in_stack_ffffffffffffff39;
  uint64_t local_68;
  string *local_48;
  string *local_38;
  
  sVar2 = *param_2;
  uVar8 = (uint64_t)(byte)sVar2;
  psVar1 = param_2 + 1;
  bVar10 = ((byte)sVar2 & 1) == 0;
  psVar4 = *(string **)(param_2 + 0x10);
  psVar7 = psVar4;
  if (bVar10) {
    psVar7 = psVar1;
  }
  local_48 = *(string **)(param_2 + 8);
  psVar9 = (string *)(uint64_t)((byte)sVar2 >> 1);
  if (!bVar10) {
    psVar9 = local_48;
  }
  this = psVar1;
  psVar5 = param_2;
  if (0 < (int64_t)psVar9) {
    psVar5 = psVar9;
    while (psVar3 = _memchr(this,(int)psVar5,(size_t)param_3), psVar3 != (string *)0x0) {
      if (*psVar3 == (string)0x7c) {
        if ((psVar3 == psVar7) && (psVar3 != psVar7 + (int64_t)psVar9)) {
          local_38 = (string *)((int64_t)&MACH_HEADER.magic + 1);
          if (psVar9 < (string *)((int64_t)&MACH_HEADER.magic + 2)) goto LAB_009ca271;
          local_38 = (string *)((int64_t)&MACH_HEADER.magic + 1);
          do {
            psVar7 = (string *)(uVar8 >> 1);
            psVar9 = psVar1;
            if (!bVar10) {
              psVar7 = local_48;
              psVar9 = psVar4;
            }
            if (local_38 <= psVar7) {
              psVar4 = psVar9 + (int64_t)local_38;
              while ((lVar6 = (int64_t)(psVar7 + (int64_t)psVar9) - (int64_t)psVar4, 0 < lVar6 &&
                     (psVar4 = _memchr(this,(int)lVar6,(size_t)param_3), psVar4 != (string *)0x0)))
              {
                if (*psVar4 == (string)0x7c) {
                  if (psVar4 != psVar7 + (int64_t)psVar9) {
                    lVar6 = (int64_t)psVar4 - (int64_t)psVar9;
                    if (lVar6 == -1) {
                      lVar6 = -1;
                    }
                    else {
                      this = (string *)(lVar6 - (int64_t)local_38);
                      if (this != (string *)0x0) {
                        param_3 = param_2;
                        std::string::string(this,local_38,(ulong)param_2,param_4,
                                            (allocator *)
                                            CONCAT71(in_stack_ffffffffffffff39,
                                                     in_stack_ffffffffffffff38));
                        FUN_009ca756();
                        if ((local_68 & 1) != 0) {
                          operator_delete(this);
                        }
                        uVar8 = (uint64_t)(byte)*param_2;
                        local_48 = *(string **)(param_2 + 8);
                      }
                      local_38 = (string *)(lVar6 + 1);
                    }
                    goto LAB_009ca20f;
                  }
                  break;
                }
                psVar4 = psVar4 + 1;
              }
            }
            lVar6 = -1;
LAB_009ca20f:
            bVar10 = (uVar8 & 1) == 0;
            psVar9 = (string *)(uVar8 >> 1);
            if (!bVar10) {
              psVar9 = local_48;
            }
            if ((lVar6 == -1) || (psVar9 <= local_38)) {
LAB_009ca271:
              if (local_38 < psVar9) {
                this = (string *)0xffffffffffffffff;
                std::string::string((string *)0xffffffffffffffff,local_38,(ulong)param_2,param_4,
                                    (allocator *)
                                    CONCAT71(in_stack_ffffffffffffff39,in_stack_ffffffffffffff38));
                FUN_009ca756();
                if ((local_68 & 1) != 0) {
                  operator_delete(this);
                }
              }
              std::string::string(this,local_38);
              FUN_0088cae0();
              return this_ptr;
            }
            psVar4 = *(string **)(param_2 + 0x10);
          } while( true );
        }
        break;
      }
      psVar5 = psVar7 + (int64_t)psVar9 + -(int64_t)(psVar3 + 1);
      if ((int64_t)psVar5 < 1) break;
    }
  }
  std::string::string(this,psVar5);
  return this_ptr;
}

