// Function: FUN_010b0f90
// Address: 010b0f90
// Size: 787 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_010b0f90(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  X509 *a;
  int iVar6;
  int64_t this_ptr;
  int iVar7;
  X509_ALGOR *pXVar8;
  bool bVar9;
  X509_CINF *local_68;
  X509_ALGOR *local_60;
  STACK *local_58;
  int64_t local_50;
  uint32_t local_48;
  uint local_44;
  STACK *local_40;
  int local_34;
  
  uVar2 = *(uint64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x18);
  if ((uVar2 & 4) != 0) {
    if ((uVar2 & 8) == 0) {
      if (*(int64_t *)(this_ptr + 0xd8) != 0) {
        return 1;
      }
      iVar3 = 0;
    }
    else {
      iVar3 = _OPENSSL_sk_num();
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 1;
      }
    }
    a = (X509 *)((int64_t)&MACH_HEADER.magic + 1);
    iVar6 = 0;
    local_34 = iVar3;
    do {
      *(int *)(this_ptr + 0xac) = iVar6;
      local_40 = (STACK *)0x0;
      local_50 = _OPENSSL_sk_value();
      *(int64_t *)(this_ptr + 0xb8) = local_50;
      *(void*)(this_ptr + 0xc0) = 0;
      *(void*)(this_ptr + 0xd0) = 0;
      if ((*(byte *)(local_50 + 0xe1) & 4) == 0) {
        iVar7 = 0;
        do {
          if (*(code **)(this_ptr + 0x58) == 0x0) {
            local_68 = (X509_CINF *)0x0;
            local_48 = 0;
            local_58 = (STACK *)0x0;
            local_60 = (X509_ALGOR *)0x0;
            _X509_get_issuer_name(a);
            local_44 = *(uint *)(this_ptr + 0xd4);
            a = (X509 *)&stack0xffffffffffffff98;
            iVar3 = FUN_010b2600(a,&stack0xffffffffffffffa0,&stack0xffffffffffffffb8,
                                 &stack0xffffffffffffffbc);
            if (iVar3 == 0) {
              lVar5 = (**(code **)(this_ptr + 0x80))();
              if ((lVar5 != 0) || (local_58 == (STACK *)0x0)) {
                a = (X509 *)&stack0xffffffffffffff98;
                FUN_010b2600(a,&stack0xffffffffffffffa0,&stack0xffffffffffffffb8,
                             &stack0xffffffffffffffbc);
                _OPENSSL_sk_pop_free();
                goto joined_r0x010b1187;
              }
            }
            else {
joined_r0x010b1187:
              if (local_58 == (STACK *)0x0) {
                iVar3 = 0;
                pXVar8 = (X509_ALGOR *)0x0;
                goto LAB_010b11bf;
              }
            }
            *(X509_CINF **)(this_ptr + 0xc0) = local_68;
            *(void*)(this_ptr + 0xd0) = local_48;
            a = (X509 *)(uint64_t)local_44;
            *(uint *)(this_ptr + 0xd4) = local_44;
            iVar3 = 1;
            pXVar8 = local_60;
            local_40 = local_58;
          }
          else {
            iVar3 = (**(code **)(this_ptr + 0x58))();
            pXVar8 = (X509_ALGOR *)0x0;
          }
LAB_010b11bf:
          if (iVar3 == 0) {
LAB_010b1275:
            iVar3 = local_34;
            *(void*)(this_ptr + 0xb0) = 3;
            iVar4 = (**(code **)(this_ptr + 0x38))();
            break;
          }
          *(STACK **)(this_ptr + 200) = local_40;
          iVar3 = (**(code **)(this_ptr + 0x60))();
          if (iVar3 == 0) {
LAB_010b1010:
            iVar4 = 0;
            iVar3 = local_34;
            break;
          }
          if (pXVar8 == (X509_ALGOR *)0x0) {
LAB_010b121b:
            iVar4 = (**(code **)(this_ptr + 0x68))();
            if (iVar4 == 0) goto LAB_010b1010;
          }
          else {
            iVar3 = (**(code **)(this_ptr + 0x60))();
            if (iVar3 == 0) goto LAB_010b1010;
            iVar4 = (**(code **)(this_ptr + 0x68))();
            if (iVar4 != 2) {
              iVar3 = local_34;
              if (iVar4 != 0) goto LAB_010b121b;
              break;
            }
          }
          _X509_CRL_free((X509_CRL *)a);
          _X509_CRL_free((X509_CRL *)a);
          local_40 = (STACK *)0x0;
          iVar1 = *(int *)(this_ptr + 0xd4);
          if (iVar7 == iVar1) goto LAB_010b1275;
          iVar3 = local_34;
          iVar7 = iVar1;
        } while (iVar1 != 0x807f);
        _X509_CRL_free((X509_CRL *)a);
        _X509_CRL_free((X509_CRL *)a);
        *(void*)(this_ptr + 200) = 0;
        if (iVar4 == 0) {
          return 0;
        }
      }
      bVar9 = iVar6 != iVar3;
      iVar6 = iVar6 + 1;
    } while (bVar9);
  }
  return 1;
}

