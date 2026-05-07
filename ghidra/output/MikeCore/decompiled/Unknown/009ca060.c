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


/* WARNING: Removing unreachable block (ram,0x009ca2d1) */
/* WARNING: Removing unreachable block (ram,0x009ca2f2) */
/* WARNING: Removing unreachable block (ram,0x009ca30c) */
/* WARNING: Removing unreachable block (ram,0x009ca310) */
/* WARNING: Removing unreachable block (ram,0x009ca31a) */
/* WARNING: Removing unreachable block (ram,0x009ca340) */
/* WARNING: Removing unreachable block (ram,0x009ca352) */
/* WARNING: Removing unreachable block (ram,0x009ca357) */
/* WARNING: Removing unreachable block (ram,0x009ca35b) */
/* WARNING: Removing unreachable block (ram,0x009ca361) */
/* WARNING: Removing unreachable block (ram,0x009ca3d5) */
/* WARNING: Removing unreachable block (ram,0x009ca383) */
/* WARNING: Removing unreachable block (ram,0x009ca395) */
/* WARNING: Removing unreachable block (ram,0x009ca397) */
/* WARNING: Removing unreachable block (ram,0x009ca39b) */
/* WARNING: Removing unreachable block (ram,0x009ca3a1) */
/* WARNING: Removing unreachable block (ram,0x009ca3c5) */
/* WARNING: Removing unreachable block (ram,0x009ca3c9) */
/* WARNING: Removing unreachable block (ram,0x009ca3cf) */
/* WARNING: Removing unreachable block (ram,0x009ca3d9) */
/* WARNING: Removing unreachable block (ram,0x009ca40c) */
/* WARNING: Removing unreachable block (ram,0x009ca420) */
/* WARNING: Removing unreachable block (ram,0x009ca43c) */
/* WARNING: Removing unreachable block (ram,0x009ca4e5) */
/* WARNING: Removing unreachable block (ram,0x009ca459) */
/* WARNING: Removing unreachable block (ram,0x009ca4c4) */
/* WARNING: Removing unreachable block (ram,0x009ca4c8) */
/* WARNING: Removing unreachable block (ram,0x009ca4fa) */
/* WARNING: Removing unreachable block (ram,0x009ca4d5) */
/* WARNING: Removing unreachable block (ram,0x009ca500) */
/* WARNING: Removing unreachable block (ram,0x009ca509) */
/* WARNING: Removing unreachable block (ram,0x009ca514) */
/* WARNING: Removing unreachable block (ram,0x009ca50e) */
/* WARNING: Removing unreachable block (ram,0x009ca51b) */
/* WARNING: Removing unreachable block (ram,0x009ca5ab) */
/* WARNING: Removing unreachable block (ram,0x009ca524) */
/* WARNING: Removing unreachable block (ram,0x009ca53d) */
/* WARNING: Removing unreachable block (ram,0x009ca547) */
/* WARNING: Removing unreachable block (ram,0x009ca56d) */
/* WARNING: Removing unreachable block (ram,0x009ca576) */
/* WARNING: Removing unreachable block (ram,0x009ca5af) */
/* WARNING: Removing unreachable block (ram,0x009ca5c1) */
/* WARNING: Removing unreachable block (ram,0x009ca5b4) */
/* WARNING: Removing unreachable block (ram,0x009ca5ca) */
/* WARNING: Removing unreachable block (ram,0x009ca5e4) */
/* WARNING: Removing unreachable block (ram,0x009ca5ed) */
/* WARNING: Removing unreachable block (ram,0x009ca5f6) */
/* WARNING: Removing unreachable block (ram,0x009ca602) */
/* WARNING: Removing unreachable block (ram,0x009ca63a) */
/* WARNING: Removing unreachable block (ram,0x009ca608) */
/* WARNING: Removing unreachable block (ram,0x009ca64c) */
/* WARNING: Removing unreachable block (ram,0x009ca62e) */
/* WARNING: Removing unreachable block (ram,0x009ca654) */
/* WARNING: Removing unreachable block (ram,0x009ca661) */
/* WARNING: Removing unreachable block (ram,0x009ca668) */
/* WARNING: Removing unreachable block (ram,0x009ca69e) */
/* WARNING: Removing unreachable block (ram,0x009ca692) */
/* WARNING: Removing unreachable block (ram,0x009ca6a6) */
/* WARNING: Removing unreachable block (ram,0x009ca6b3) */
/* WARNING: Removing unreachable block (ram,0x009ca427) */

undefined8 FUN_009ca060(undefined8 param_1,string *param_2,string *param_3,ulong param_4)

{
  string *psVar1;
  string sVar2;
  string *psVar3;
  string *psVar4;
  string *this;
  string *psVar5;
  longlong lVar6;
  string *psVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  string *psVar9;
  bool bVar10;
  undefined1 in_stack_ffffffffffffff38;
  undefined7 in_stack_ffffffffffffff39;
  ulonglong local_68;
  string *local_48;
  string *local_38;
  
  sVar2 = *param_2;
  uVar8 = (ulonglong)(byte)sVar2;
  psVar1 = param_2 + 1;
  bVar10 = ((byte)sVar2 & 1) == 0;
  psVar4 = *(string **)(param_2 + 0x10);
  psVar7 = psVar4;
  if (bVar10) {
    psVar7 = psVar1;
  }
  local_48 = *(string **)(param_2 + 8);
  psVar9 = (string *)(ulonglong)((byte)sVar2 >> 1);
  if (!bVar10) {
    psVar9 = local_48;
  }
  this = psVar1;
  psVar5 = param_2;
  if (0 < (longlong)psVar9) {
    psVar5 = psVar9;
    while (psVar3 = _memchr(this,(int)psVar5,(size_t)param_3), psVar3 != (string *)0x0) {
      if (*psVar3 == (string)0x7c) {
        if ((psVar3 == psVar7) && (psVar3 != psVar7 + (longlong)psVar9)) {
          local_38 = (string *)((longlong)&MACH_HEADER.magic + 1);
          if (psVar9 < (string *)((longlong)&MACH_HEADER.magic + 2)) goto LAB_009ca271;
          local_38 = (string *)((longlong)&MACH_HEADER.magic + 1);
          do {
            psVar7 = (string *)(uVar8 >> 1);
            psVar9 = psVar1;
            if (!bVar10) {
              psVar7 = local_48;
              psVar9 = psVar4;
            }
            if (local_38 <= psVar7) {
              psVar4 = psVar9 + (longlong)local_38;
              while ((lVar6 = (longlong)(psVar7 + (longlong)psVar9) - (longlong)psVar4, 0 < lVar6 &&
                     (psVar4 = _memchr(this,(int)lVar6,(size_t)param_3), psVar4 != (string *)0x0)))
              {
                if (*psVar4 == (string)0x7c) {
                  if (psVar4 != psVar7 + (longlong)psVar9) {
                    lVar6 = (longlong)psVar4 - (longlong)psVar9;
                    if (lVar6 == -1) {
                      lVar6 = -1;
                    }
                    else {
                      this = (string *)(lVar6 - (longlong)local_38);
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
                        uVar8 = (ulonglong)(byte)*param_2;
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
              return unaff_RDI;
            }
            psVar4 = *(string **)(param_2 + 0x10);
          } while( true );
        }
        break;
      }
      psVar5 = psVar7 + (longlong)psVar9 + -(longlong)(psVar3 + 1);
      if ((longlong)psVar5 < 1) break;
    }
  }
  std::string::string(this,psVar5);
  return unaff_RDI;
}


