// Function: FUN_00f61ea0
// Address: 00f61ea0
// Size: 1202 bytes
// Class: Unknown
// String references:
//   "\n"
//   " + "
//   ", "
//   "; "
//   " = "

ASN1_OBJECT * FUN_00f61ea0(uint param_1,uint64_t param_2,ASN1_OBJECT *param_3,int param_4)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  char *pcVar9;
  ASN1_OBJECT *o;
  ASN1_OBJECT *pAVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  code *this_ptr;
  ASN1_OBJECT *a;
  ASN1_OBJECT *pAVar14;
  uint uVar15;
  int local_b8;
  int local_b0;
  int local_a0;
  ASN1_OBJECT *local_98;
  uint local_8c;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pAVar14 = (ASN1_OBJECT *)0x0;
  if (-1 < (int)param_1) {
    pAVar14 = (ASN1_OBJECT *)(uint64_t)param_1;
  }
  local_8c = (uint)pAVar14;
  pAVar10 = pAVar14;
  a = param_3;
  if (0 < (int)param_1) {
    do {
      iVar2 = (*this_ptr)();
      if (iVar2 == 0) goto switchD_00f61f70_default;
      uVar11 = (int)pAVar10 - 1;
      pAVar10 = (ASN1_OBJECT *)(uint64_t)uVar11;
    } while (uVar11 != 0);
  }
  uVar11 = (uint)param_3;
  local_b0 = 3;
  local_a0 = 1;
  local_98 = pAVar14;
  switch((uint64_t)(uVar11 & 0xf0000) - 0x10000 >> 0x10) {
  case 0:
    local_a0 = 1;
    local_98 = (ASN1_OBJECT *)0x0;
    local_b0 = 1;
    break;
  case 1:
    goto LAB_00f61fd0;
  case 2:
LAB_00f61fd0:
    local_a0 = 2;
    local_98 = (ASN1_OBJECT *)0x0;
    break;
  case 3:
    break;
  default:
switchD_00f61f70_default:
    pAVar14 = (ASN1_OBJECT *)0xffffffff;
    goto LAB_00f6232c;
  }
  pcVar9 = " = ";
  if (((uint64_t)param_3 & 0x800000) == 0) {
    pcVar9 = "=";
  }
  pAVar10 = param_3;
  iVar2 = _X509_NAME_entry_count((X509_NAME *)pcVar9);
  if (0 < iVar2) {
    uVar3 = uVar11 & 0x600000;
    local_b8 = -1;
    iVar4 = 0;
    o = local_98;
    do {
      _X509_NAME_get_entry((X509_NAME *)o,(int)pAVar10);
      if (local_b8 != -1) {
        iVar5 = _X509_NAME_ENTRY_set();
        if (local_b8 == iVar5) {
          iVar5 = (*this_ptr)();
          if (iVar5 == 0) goto switchD_00f61f70_default;
          local_8c = local_8c + local_b0;
        }
        else {
          iVar5 = (*this_ptr)();
          pAVar14 = (ASN1_OBJECT *)0xffffffff;
          pAVar10 = local_98;
          uVar15 = (uint)local_98;
          if (iVar5 == 0) break;
          while (uVar15 != 0) {
            iVar5 = (*this_ptr)();
            if (iVar5 == 0) goto LAB_00f6232c;
            uVar15 = (int)pAVar10 - 1;
            pAVar10 = (ASN1_OBJECT *)(uint64_t)uVar15;
          }
          local_8c = local_8c + local_a0 + (uint)local_98;
        }
      }
      local_b8 = _X509_NAME_ENTRY_set();
      pAVar14 = _X509_NAME_ENTRY_get_object((X509_NAME_ENTRY *)o);
      pAVar8 = (ASN1_OBJECT *)_X509_NAME_ENTRY_get_data((X509_NAME_ENTRY *)o);
      iVar5 = _OBJ_obj2nid(o);
      if (uVar3 != 0x600000) {
        if ((uVar3 == 0x400000) || (iVar5 == 0)) {
          _OBJ_obj2txt((char *)((int64_t)&MACH_HEADER.magic + 1),(int)pAVar14,a,param_4);
          pcVar9 = (char *)0x0;
        }
        else if (uVar3 == 0x200000) {
          _OBJ_nid2ln((int)o);
          pcVar9 = (char *)((int64_t)&MACH_HEADER.flags + 1);
        }
        else {
          pcVar9 = (char *)0x0;
          if (((uint64_t)param_3 & 0x600000) == 0) {
            _OBJ_nid2sn(0);
            pcVar9 = (char *)((int64_t)&MACH_HEADER.cpusubtype + 2);
          }
        }
        sVar6 = _strlen(pcVar9);
        iVar7 = (*this_ptr)();
        pAVar14 = (ASN1_OBJECT *)0xffffffff;
        if (iVar7 == 0) break;
        iVar7 = (int)pcVar9;
        if (((int)sVar6 < iVar7) && (((uint64_t)param_3 & 0x2000000) != 0)) {
          iVar12 = iVar7 - sVar6;
          iVar13 = iVar12;
          if (iVar12 != 0 && (int)sVar6 <= iVar7) {
            do {
              iVar7 = (*this_ptr)();
              if (iVar7 == 0) goto LAB_00f6232c;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          local_8c = local_8c + iVar12;
        }
        iVar7 = (*this_ptr)();
        if (iVar7 == 0) break;
        local_8c = sVar6 + ((uVar11 & 0x800000) >> 0x17) * 2 + 1 + local_8c;
      }
      pAVar10 = (ASN1_OBJECT *)
                ((uint64_t)(iVar5 == 0 & (byte)((uint64_t)param_3 >> 0x18) & 1) << 7 |
                (uint64_t)param_3);
      iVar5 = FUN_00f62480();
      if (iVar5 < 0) goto switchD_00f61f70_default;
      local_8c = local_8c + iVar5;
      pAVar14 = (ASN1_OBJECT *)(uint64_t)local_8c;
      iVar4 = iVar4 + 1;
      o = pAVar8;
    } while (iVar4 != iVar2);
  }
LAB_00f6232c:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return pAVar14;
}

