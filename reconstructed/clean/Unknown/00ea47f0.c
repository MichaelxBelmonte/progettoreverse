// Function: FUN_00ea47f0
// Address: 00ea47f0
// Size: 16351 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
//   "\n    [%d: huff+mtf "
//   "rt+rld"

uint64_t FUN_00ea47f0(void)

{
  uint *puVar1;
  void*puVar2;
  uint8_t uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  byte bVar25;
  int iVar26;
  void*puVar27;
  int64_t lVar28;
  char cVar29;
  byte bVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int *piVar34;
  uint64_t uVar35;
  void*puVar36;
  uint64_t uVar37;
  int64_t lVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  void*puVar42;
  uint uVar43;
  void*this_ptr;
  int64_t lVar44;
  uint64_t uVar45;
  uint8_t auVar46 [8];
  void*puVar47;
  char cVar48;
  FILE *pFVar49;
  uint8_t auVar50 [8];
  uint8_t auVar51 [8];
  uint64_t uVar52;
  int iVar53;
  void*puVar54;
  bool bVar55;
  uint uVar56;
  uint64_t extraout_XMM0_Qa;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint8_t in_XMM4 [16];
  uint8_t in_XMM5 [16];
  int64_t local_d8;
  uint local_cc;
  void*local_c8;
  int local_b4;
  uint local_a4;
  uint8_t local_98 [8];
  uint8_t local_90 [8];
  uint8_t local_88 [8];
  uint8_t local_80 [8];
  uint8_t local_78 [8];
  uint8_t local_70 [4];
  int local_6c;
  uint8_t local_68 [4];
  uint8_t auStack_64 [4];
  uint8_t local_60;
  uint8_t auStack_5f [8];
  uint8_t auStack_57 [7];
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  uint64_t local_38;
  
  iVar26 = *(int *)(this_ptr + 1);
  if (iVar26 == 10) {
    *(uint8_t (*) [16])(this_ptr + 0x1f50) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa74) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa64) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa54) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa44) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa34) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])((int64_t)this_ptr + 0xfa24) = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [8])0x0;
    local_d8 = 0;
    local_c8 = (void*)0x0;
    local_a4 = 0;
    local_90 = (uint8_t  [8])0x0;
    local_cc = 0;
    local_38 = 0;
    local_48 = (uint64_t)local_48._4_4_ << 0x20;
    pFVar49 = (FILE *)0x0;
    uVar20 = 0;
    iVar32 = 0;
    iVar33 = 0;
    _local_68 = (uint64_t)(uint)auStack_64 << 0x20;
    local_b4 = 0;
    auVar50 = (uint8_t  [8])0x0;
    iVar53 = 0;
    uStack_40 = 0;
    local_80 = (uint8_t  [8])((uint64_t)(uint)local_80._4_4_ << 0x20);
    uVar22 = 0;
    uVar40 = 0;
    uVar43 = 0;
    uVar56 = 0;
    local_70 = (uint8_t  [4])0x0;
    auVar51 = (uint8_t  [8])0x0;
  }
  else {
    auVar51 = (uint8_t  [8])(uint64_t)*(uint *)((int64_t)this_ptr + 0xfa24);
    local_70 = (uint8_t  [4])*(uint *)(this_ptr + 0x1f45);
    uVar56 = *(uint *)((int64_t)this_ptr + 0xfa2c);
    uVar43 = *(uint *)(this_ptr + 0x1f46);
    uVar40 = *(uint *)((int64_t)this_ptr + 0xfa34);
    uVar22 = *(uint *)(this_ptr + 0x1f47);
    local_80._0_4_ = *(void*)((int64_t)this_ptr + 0xfa3c);
    uStack_40 = (uint64_t)*(uint *)(this_ptr + 0x1f48);
    iVar53 = *(int *)((int64_t)this_ptr + 0xfa44);
    auVar50 = (uint8_t  [8])(uint64_t)*(uint *)(this_ptr + 0x1f49);
    local_b4 = *(int *)((int64_t)this_ptr + 0xfa4c);
    _local_68 = CONCAT44(auStack_64,*(void*)(this_ptr + 0x1f4a));
    iVar33 = *(int *)((int64_t)this_ptr + 0xfa54);
    iVar32 = *(int *)(this_ptr + 0x1f4b);
    uVar20 = *(uint *)((int64_t)this_ptr + 0xfa5c);
    pFVar49 = (FILE *)(uint64_t)*(uint *)(this_ptr + 0x1f4c);
    local_48 = CONCAT44(local_48._4_4_,*(void*)((int64_t)this_ptr + 0xfa64));
    local_38 = (uint64_t)*(uint *)(this_ptr + 0x1f4d);
    local_cc = *(uint *)((int64_t)this_ptr + 0xfa6c);
    local_90 = (uint8_t  [8])(uint64_t)*(uint *)(this_ptr + 0x1f4e);
    local_a4 = *(uint *)((int64_t)this_ptr + 0xfa74);
    local_c8 = (void*)this_ptr[0x1f4f];
    local_d8 = this_ptr[0x1f50];
    local_78 = (uint8_t  [8])this_ptr[0x1f51];
  }
  if (0x28 < iVar26 - 10U) {
    local_48 = CONCAT44(uVar43,(uint)local_48);
    local_98 = auVar50;
    local_6c = iVar53;
    _local_60 = uVar22;
    FUN_00e9e160();
    FUN_00e9e160();
    uVar24 = 0;
    auVar50 = local_98;
    uVar43 = local_48._4_4_;
    uVar22 = _local_60;
    iVar53 = local_6c;
    auVar46 = local_80;
    goto LAB_00ea7afb;
  }
  puVar54 = (void*)*this_ptr;
  uVar19 = uVar40;
  uVar41 = uVar56;
  auVar46 = local_80;
  switch(iVar26) {
  case 10:
    *(void*)(this_ptr + 1) = 10;
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    if (iVar26 < 8) {
      iVar39 = *(int *)(puVar54 + 1);
      iVar31 = iVar26;
      do {
        iVar39 = iVar39 + -1;
        if (iVar39 == -1) goto LAB_00ea68fd;
        pbVar5 = (byte *)*puVar54;
        uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
        *(uint *)(this_ptr + 4) = uVar19;
        iVar26 = iVar31 + 8;
        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
        *puVar54 = pbVar5 + 1;
        *(int *)(puVar54 + 1) = iVar39;
        piVar34 = (int *)((int64_t)puVar54 + 0xc);
        *piVar34 = *piVar34 + 1;
        if (*piVar34 == 0) {
          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
        }
        bVar55 = iVar31 < 0;
        iVar31 = iVar26;
      } while (bVar55);
    }
    else {
      uVar19 = *(uint *)(this_ptr + 4);
    }
    iVar26 = iVar26 + -8;
    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
    uVar24 = 0xfffffffb;
    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) != 'B') goto LAB_00ea7afb;
    break;
  case 0xb:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    break;
  case 0xc:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea4ac9;
  case 0xd:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea4afe;
  case 0xe:
    goto switchD_00ea4a00_caseD_e;
  case 0xf:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea5483;
  case 0x10:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea54b3;
  case 0x11:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea54e3;
  case 0x12:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea5513;
  case 0x13:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea5543;
  case 0x14:
    goto switchD_00ea4a00_caseD_14;
  case 0x15:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x15;
    goto joined_r0x00ea4c23;
  case 0x16:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x16;
    goto joined_r0x00ea4c96;
  case 0x17:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x17;
    goto joined_r0x00ea4d06;
  case 0x18:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea56b4;
  case 0x19:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x19;
    local_98 = auVar50;
    goto joined_r0x00ea4d7f;
  case 0x1a:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x1a;
    local_98 = auVar50;
    goto joined_r0x00ea4df6;
  case 0x1b:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x1b;
    local_98 = auVar50;
    goto joined_r0x00ea4e66;
  case 0x1c:
    goto switchD_00ea4a00_caseD_1c;
  case 0x1d:
    goto switchD_00ea4a00_caseD_1d;
  case 0x1e:
    goto switchD_00ea4a00_caseD_1e;
  case 0x1f:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    local_98 = auVar50;
    goto LAB_00ea4ecb;
  case 0x20:
    goto switchD_00ea4a00_caseD_20;
  case 0x21:
    goto switchD_00ea4a00_caseD_21;
  case 0x22:
    goto switchD_00ea4a00_caseD_22;
  case 0x23:
    uVar41 = *(uint *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea5e0c;
  case 0x24:
    goto switchD_00ea4a00_caseD_24;
  case 0x25:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    local_88 = auVar51;
    local_48._4_4_ = uVar43;
    goto LAB_00ea6654;
  case 0x26:
    goto switchD_00ea4a00_caseD_26;
  case 0x27:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x27;
    if (0 < iVar26) goto LAB_00ea87df;
    goto LAB_00ea4f38;
  case 0x28:
    goto switchD_00ea4a00_caseD_28;
  case 0x29:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x29;
    local_98 = auVar50;
    if (0 < iVar26) goto LAB_00ea8740;
    goto LAB_00ea4fac;
  case 0x2a:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea578f;
  case 0x2b:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea57bf;
  case 0x2c:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea57ef;
  case 0x2d:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea581f;
  case 0x2e:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    goto LAB_00ea584f;
  case 0x2f:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x2f;
    local_98 = auVar50;
    goto joined_r0x00ea5044;
  case 0x30:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x30;
    local_98 = auVar50;
    goto joined_r0x00ea512a;
  case 0x31:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x31;
    local_98 = auVar50;
    goto joined_r0x00ea5196;
  case 0x32:
    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
    *(void*)(this_ptr + 1) = 0x32;
    local_98 = auVar50;
    goto joined_r0x00ea5206;
  }
  *(void*)(this_ptr + 1) = 0xb;
  if (iVar26 < 8) {
    iVar39 = *(int *)(puVar54 + 1);
    iVar31 = iVar26;
    do {
      iVar39 = iVar39 + -1;
      if (iVar39 == -1) goto LAB_00ea68fd;
      pbVar5 = (byte *)*puVar54;
      uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
      *(uint *)(this_ptr + 4) = uVar19;
      iVar26 = iVar31 + 8;
      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
      *puVar54 = pbVar5 + 1;
      *(int *)(puVar54 + 1) = iVar39;
      piVar34 = (int *)((int64_t)puVar54 + 0xc);
      *piVar34 = *piVar34 + 1;
      if (*piVar34 == 0) {
        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
      }
      bVar55 = iVar31 < 0;
      iVar31 = iVar26;
    } while (bVar55);
  }
  else {
    uVar19 = *(uint *)(this_ptr + 4);
  }
  iVar26 = iVar26 + -8;
  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
  uVar24 = 0xfffffffb;
  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'Z') {
LAB_00ea4ac9:
    *(void*)(this_ptr + 1) = 0xc;
    if (iVar26 < 8) {
      iVar39 = *(int *)(puVar54 + 1);
      iVar31 = iVar26;
      do {
        iVar39 = iVar39 + -1;
        if (iVar39 == -1) goto LAB_00ea68fd;
        pbVar5 = (byte *)*puVar54;
        uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
        *(uint *)(this_ptr + 4) = uVar19;
        iVar26 = iVar31 + 8;
        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
        *puVar54 = pbVar5 + 1;
        *(int *)(puVar54 + 1) = iVar39;
        piVar34 = (int *)((int64_t)puVar54 + 0xc);
        *piVar34 = *piVar34 + 1;
        if (*piVar34 == 0) {
          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
        }
        bVar55 = iVar31 < 0;
        iVar31 = iVar26;
      } while (bVar55);
    }
    else {
      uVar19 = *(uint *)(this_ptr + 4);
    }
    iVar26 = iVar26 + -8;
    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
    uVar24 = 0xfffffffb;
    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'h') {
LAB_00ea4afe:
      *(void*)(this_ptr + 1) = 0xd;
      if (iVar26 < 8) {
        iVar39 = *(int *)(puVar54 + 1);
        iVar31 = iVar26;
        do {
          iVar39 = iVar39 + -1;
          if (iVar39 == -1) goto LAB_00ea68fd;
          pbVar5 = (byte *)*puVar54;
          uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
          *(uint *)(this_ptr + 4) = uVar19;
          iVar26 = iVar31 + 8;
          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
          *puVar54 = pbVar5 + 1;
          *(int *)(puVar54 + 1) = iVar39;
          piVar34 = (int *)((int64_t)puVar54 + 0xc);
          *piVar34 = *piVar34 + 1;
          if (*piVar34 == 0) {
            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
          }
          bVar55 = iVar31 < 0;
          iVar31 = iVar26;
        } while (bVar55);
      }
      else {
        uVar19 = *(uint *)(this_ptr + 4);
      }
      uVar41 = uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff;
      *(int *)((int64_t)this_ptr + 0x24) = iVar26 + -8;
      *(uint *)(this_ptr + 5) = uVar41;
      uVar19 = uVar41 - 0x31;
      uVar24 = 0xfffffffb;
      if (uVar19 < 9) {
        local_48 = CONCAT44(uVar43,(uint)local_48);
        *(uint *)(this_ptr + 5) = uVar41 - 0x30;
        auStack_5f._3_4_ = (uint)pFVar49;
        if (*(char *)((int64_t)this_ptr + 0x2c) == '\0') {
          local_98 = auVar50;
          local_88 = auVar51;
          _local_60 = uVar22;
          lVar28 = (*puVar54[7])(uVar19,1);
          this_ptr[0x18a] = lVar28;
          pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
          auVar50 = local_98;
          auVar51 = local_88;
          uVar43 = local_48._4_4_;
          uVar22 = _local_60;
          if (lVar28 == 0) {
            uVar24 = 0xfffffffd;
            auVar46 = local_80;
          }
          else {
switchD_00ea4a00_caseD_e:
            *(void*)(this_ptr + 1) = 0xe;
            iVar26 = *(int *)((int64_t)this_ptr + 0x24);
            if (iVar26 < 8) {
              puVar54 = (void*)*this_ptr;
              iVar39 = *(int *)(puVar54 + 1);
              iVar31 = iVar26;
              do {
                iVar39 = iVar39 + -1;
                if (iVar39 == -1) goto LAB_00ea68fd;
                pbVar5 = (byte *)*puVar54;
                uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                *(uint *)(this_ptr + 4) = uVar19;
                iVar26 = iVar31 + 8;
                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                *puVar54 = pbVar5 + 1;
                *(int *)(puVar54 + 1) = iVar39;
                piVar34 = (int *)((int64_t)puVar54 + 0xc);
                *piVar34 = *piVar34 + 1;
                if (*piVar34 == 0) {
                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                }
                bVar55 = iVar31 < 0;
                iVar31 = iVar26;
              } while (bVar55);
            }
            else {
              uVar19 = *(uint *)(this_ptr + 4);
            }
            iVar26 = iVar26 + -8;
            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
            cVar29 = (char)(uVar19 >> ((byte)iVar26 & 0x1f));
            if (cVar29 == '\x17') {
LAB_00ea578f:
              *(void*)(this_ptr + 1) = 0x2a;
              if (iVar26 < 8) {
                puVar54 = (void*)*this_ptr;
                iVar39 = *(int *)(puVar54 + 1);
                iVar31 = iVar26;
                do {
                  iVar39 = iVar39 + -1;
                  if (iVar39 == -1) goto LAB_00ea68fd;
                  pbVar5 = (byte *)*puVar54;
                  uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                  *(uint *)(this_ptr + 4) = uVar19;
                  iVar26 = iVar31 + 8;
                  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                  *puVar54 = pbVar5 + 1;
                  *(int *)(puVar54 + 1) = iVar39;
                  piVar34 = (int *)((int64_t)puVar54 + 0xc);
                  *piVar34 = *piVar34 + 1;
                  if (*piVar34 == 0) {
                    *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                  }
                  bVar55 = iVar31 < 0;
                  iVar31 = iVar26;
                } while (bVar55);
              }
              else {
                uVar19 = *(uint *)(this_ptr + 4);
              }
              iVar26 = iVar26 + -8;
              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
              uVar24 = 0xfffffffc;
              auVar46 = local_80;
              if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'r') {
LAB_00ea57bf:
                *(void*)(this_ptr + 1) = 0x2b;
                if (iVar26 < 8) {
                  puVar54 = (void*)*this_ptr;
                  iVar39 = *(int *)(puVar54 + 1);
                  iVar31 = iVar26;
                  do {
                    iVar39 = iVar39 + -1;
                    if (iVar39 == -1) goto LAB_00ea68fd;
                    pbVar5 = (byte *)*puVar54;
                    uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                    *(uint *)(this_ptr + 4) = uVar19;
                    iVar26 = iVar31 + 8;
                    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                    *puVar54 = pbVar5 + 1;
                    *(int *)(puVar54 + 1) = iVar39;
                    piVar34 = (int *)((int64_t)puVar54 + 0xc);
                    *piVar34 = *piVar34 + 1;
                    if (*piVar34 == 0) {
                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                    }
                    bVar55 = iVar31 < 0;
                    iVar31 = iVar26;
                  } while (bVar55);
                }
                else {
                  uVar19 = *(uint *)(this_ptr + 4);
                }
                iVar26 = iVar26 + -8;
                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                uVar24 = 0xfffffffc;
                auVar46 = local_80;
                if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'E') {
LAB_00ea57ef:
                  *(void*)(this_ptr + 1) = 0x2c;
                  if (iVar26 < 8) {
                    puVar54 = (void*)*this_ptr;
                    iVar39 = *(int *)(puVar54 + 1);
                    iVar31 = iVar26;
                    do {
                      iVar39 = iVar39 + -1;
                      if (iVar39 == -1) goto LAB_00ea68fd;
                      pbVar5 = (byte *)*puVar54;
                      uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                      *(uint *)(this_ptr + 4) = uVar19;
                      iVar26 = iVar31 + 8;
                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                      *puVar54 = pbVar5 + 1;
                      *(int *)(puVar54 + 1) = iVar39;
                      piVar34 = (int *)((int64_t)puVar54 + 0xc);
                      *piVar34 = *piVar34 + 1;
                      if (*piVar34 == 0) {
                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                      }
                      bVar55 = iVar31 < 0;
                      iVar31 = iVar26;
                    } while (bVar55);
                  }
                  else {
                    uVar19 = *(uint *)(this_ptr + 4);
                  }
                  iVar26 = iVar26 + -8;
                  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                  uVar24 = 0xfffffffc;
                  auVar46 = local_80;
                  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == '8') {
LAB_00ea581f:
                    *(void*)(this_ptr + 1) = 0x2d;
                    if (iVar26 < 8) {
                      puVar54 = (void*)*this_ptr;
                      iVar39 = *(int *)(puVar54 + 1);
                      iVar31 = iVar26;
                      do {
                        iVar39 = iVar39 + -1;
                        if (iVar39 == -1) goto LAB_00ea68fd;
                        pbVar5 = (byte *)*puVar54;
                        uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                        *(uint *)(this_ptr + 4) = uVar19;
                        iVar26 = iVar31 + 8;
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                        *puVar54 = pbVar5 + 1;
                        *(int *)(puVar54 + 1) = iVar39;
                        piVar34 = (int *)((int64_t)puVar54 + 0xc);
                        *piVar34 = *piVar34 + 1;
                        if (*piVar34 == 0) {
                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                        }
                        bVar55 = iVar31 < 0;
                        iVar31 = iVar26;
                      } while (bVar55);
                    }
                    else {
                      uVar19 = *(uint *)(this_ptr + 4);
                    }
                    iVar26 = iVar26 + -8;
                    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                    uVar24 = 0xfffffffc;
                    auVar46 = local_80;
                    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'P') {
LAB_00ea584f:
                      *(void*)(this_ptr + 1) = 0x2e;
                      if (iVar26 < 8) {
                        puVar54 = (void*)*this_ptr;
                        iVar39 = *(int *)(puVar54 + 1);
                        iVar31 = iVar26;
                        do {
                          iVar39 = iVar39 + -1;
                          if (iVar39 == -1) goto LAB_00ea68fd;
                          pbVar5 = (byte *)*puVar54;
                          uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                          *(uint *)(this_ptr + 4) = uVar19;
                          iVar26 = iVar31 + 8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *puVar54 = pbVar5 + 1;
                          *(int *)(puVar54 + 1) = iVar39;
                          piVar34 = (int *)((int64_t)puVar54 + 0xc);
                          *piVar34 = *piVar34 + 1;
                          if (*piVar34 == 0) {
                            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                          }
                          bVar55 = iVar31 < 0;
                          iVar31 = iVar26;
                        } while (bVar55);
                      }
                      else {
                        uVar19 = *(uint *)(this_ptr + 4);
                      }
                      iVar26 = iVar26 + -8;
                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                      uVar24 = 0xfffffffc;
                      auVar46 = local_80;
                      if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == -0x70) {
                        *(void*)((int64_t)this_ptr + 0xc6c) = 0;
                        *(void*)(this_ptr + 1) = 0x2f;
                        local_98 = auVar50;
joined_r0x00ea5044:
                        if (iVar26 < 8) {
                          puVar54 = (void*)*this_ptr;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                            *(uint *)(this_ptr + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(this_ptr + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                        *(uint *)((int64_t)this_ptr + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((int64_t)this_ptr + 0xc6c) << 8;
                        *(void*)(this_ptr + 1) = 0x30;
joined_r0x00ea512a:
                        if (iVar26 < 8) {
                          puVar54 = (void*)*this_ptr;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                            *(uint *)(this_ptr + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(this_ptr + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                        *(uint *)((int64_t)this_ptr + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((int64_t)this_ptr + 0xc6c) << 8;
                        *(void*)(this_ptr + 1) = 0x31;
joined_r0x00ea5196:
                        if (iVar26 < 8) {
                          puVar54 = (void*)*this_ptr;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                            *(uint *)(this_ptr + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(this_ptr + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                        *(uint *)((int64_t)this_ptr + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((int64_t)this_ptr + 0xc6c) << 8;
                        *(void*)(this_ptr + 1) = 0x32;
joined_r0x00ea5206:
                        uVar57 = SUB84(auVar51,0);
                        if (iVar26 < 8) {
                          puVar54 = (void*)*this_ptr;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                            *(uint *)(this_ptr + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(this_ptr + 4);
                        }
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26 + -8;
                        *(uint *)((int64_t)this_ptr + 0xc6c) =
                             uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff |
                             *(int *)((int64_t)this_ptr + 0xc6c) << 8;
                        *(void*)(this_ptr + 1) = 1;
                        uVar24 = 4;
                        goto LAB_00ea68ff;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar24 = 0xfffffffc;
              auVar46 = local_80;
              if (cVar29 == '1') {
LAB_00ea5483:
                *(void*)(this_ptr + 1) = 0xf;
                if (iVar26 < 8) {
                  puVar54 = (void*)*this_ptr;
                  iVar39 = *(int *)(puVar54 + 1);
                  iVar31 = iVar26;
                  do {
                    iVar39 = iVar39 + -1;
                    if (iVar39 == -1) goto LAB_00ea68fd;
                    pbVar5 = (byte *)*puVar54;
                    uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                    *(uint *)(this_ptr + 4) = uVar19;
                    iVar26 = iVar31 + 8;
                    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                    *puVar54 = pbVar5 + 1;
                    *(int *)(puVar54 + 1) = iVar39;
                    piVar34 = (int *)((int64_t)puVar54 + 0xc);
                    *piVar34 = *piVar34 + 1;
                    if (*piVar34 == 0) {
                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                    }
                    bVar55 = iVar31 < 0;
                    iVar31 = iVar26;
                  } while (bVar55);
                }
                else {
                  uVar19 = *(uint *)(this_ptr + 4);
                }
                iVar26 = iVar26 + -8;
                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                uVar24 = 0xfffffffc;
                auVar46 = local_80;
                if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'A') {
LAB_00ea54b3:
                  *(void*)(this_ptr + 1) = 0x10;
                  if (iVar26 < 8) {
                    puVar54 = (void*)*this_ptr;
                    iVar39 = *(int *)(puVar54 + 1);
                    iVar31 = iVar26;
                    do {
                      iVar39 = iVar39 + -1;
                      if (iVar39 == -1) goto LAB_00ea68fd;
                      pbVar5 = (byte *)*puVar54;
                      uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                      *(uint *)(this_ptr + 4) = uVar19;
                      iVar26 = iVar31 + 8;
                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                      *puVar54 = pbVar5 + 1;
                      *(int *)(puVar54 + 1) = iVar39;
                      piVar34 = (int *)((int64_t)puVar54 + 0xc);
                      *piVar34 = *piVar34 + 1;
                      if (*piVar34 == 0) {
                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                      }
                      bVar55 = iVar31 < 0;
                      iVar31 = iVar26;
                    } while (bVar55);
                  }
                  else {
                    uVar19 = *(uint *)(this_ptr + 4);
                  }
                  iVar26 = iVar26 + -8;
                  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                  uVar24 = 0xfffffffc;
                  auVar46 = local_80;
                  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'Y') {
LAB_00ea54e3:
                    *(void*)(this_ptr + 1) = 0x11;
                    if (iVar26 < 8) {
                      puVar54 = (void*)*this_ptr;
                      iVar39 = *(int *)(puVar54 + 1);
                      iVar31 = iVar26;
                      do {
                        iVar39 = iVar39 + -1;
                        if (iVar39 == -1) goto LAB_00ea68fd;
                        pbVar5 = (byte *)*puVar54;
                        uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                        *(uint *)(this_ptr + 4) = uVar19;
                        iVar26 = iVar31 + 8;
                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                        *puVar54 = pbVar5 + 1;
                        *(int *)(puVar54 + 1) = iVar39;
                        piVar34 = (int *)((int64_t)puVar54 + 0xc);
                        *piVar34 = *piVar34 + 1;
                        if (*piVar34 == 0) {
                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                        }
                        bVar55 = iVar31 < 0;
                        iVar31 = iVar26;
                      } while (bVar55);
                    }
                    else {
                      uVar19 = *(uint *)(this_ptr + 4);
                    }
                    iVar26 = iVar26 + -8;
                    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                    uVar24 = 0xfffffffc;
                    auVar46 = local_80;
                    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == '&') {
LAB_00ea5513:
                      *(void*)(this_ptr + 1) = 0x12;
                      if (iVar26 < 8) {
                        puVar54 = (void*)*this_ptr;
                        iVar39 = *(int *)(puVar54 + 1);
                        iVar31 = iVar26;
                        do {
                          iVar39 = iVar39 + -1;
                          if (iVar39 == -1) goto LAB_00ea68fd;
                          pbVar5 = (byte *)*puVar54;
                          uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                          *(uint *)(this_ptr + 4) = uVar19;
                          iVar26 = iVar31 + 8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *puVar54 = pbVar5 + 1;
                          *(int *)(puVar54 + 1) = iVar39;
                          piVar34 = (int *)((int64_t)puVar54 + 0xc);
                          *piVar34 = *piVar34 + 1;
                          if (*piVar34 == 0) {
                            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                          }
                          bVar55 = iVar31 < 0;
                          iVar31 = iVar26;
                        } while (bVar55);
                      }
                      else {
                        uVar19 = *(uint *)(this_ptr + 4);
                      }
                      iVar26 = iVar26 + -8;
                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                      uVar24 = 0xfffffffc;
                      auVar46 = local_80;
                      if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'S') {
LAB_00ea5543:
                        *(void*)(this_ptr + 1) = 0x13;
                        if (iVar26 < 8) {
                          puVar54 = (void*)*this_ptr;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                            *(uint *)(this_ptr + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(this_ptr + 4);
                        }
                        uVar41 = iVar26 - 8;
                        *(uint *)((int64_t)this_ptr + 0x24) = uVar41;
                        uVar24 = 0xfffffffc;
                        auVar46 = local_80;
                        if ((char)(uVar19 >> ((byte)uVar41 & 0x1f)) == 'Y') {
                          iVar26 = *(int *)(this_ptr + 6);
                          *(uint *)(this_ptr + 6) = iVar26 + 1U;
                          if (1 < *(int *)((int64_t)this_ptr + 0x34)) {
                            local_48 = CONCAT44(uVar43,(uint)local_48);
                            auStack_5f._3_4_ = SUB84(pFVar49,0);
                            local_88 = auVar51;
                            local_6c = iVar53;
                            _local_60 = uVar22;
                            _fprintf((FILE *)(uint64_t)uVar41,(char *)(uint64_t)(iVar26 + 1U));
                            pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
                            auVar51 = local_88;
                            uVar43 = local_48._4_4_;
                            uVar22 = _local_60;
                            iVar53 = local_6c;
                          }
                          *(void*)(this_ptr + 0x18d) = 0;
switchD_00ea4a00_caseD_14:
                          *(void*)(this_ptr + 1) = 0x14;
                          iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(this_ptr + 0x18d) << 8;
                          *(void*)(this_ptr + 1) = 0x15;
joined_r0x00ea4c23:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(this_ptr + 0x18d) << 8;
                          *(void*)(this_ptr + 1) = 0x16;
joined_r0x00ea4c96:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(this_ptr + 0x18d) << 8;
                          *(void*)(this_ptr + 1) = 0x17;
joined_r0x00ea4d06:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(this_ptr + 0x18d) << 8;
LAB_00ea56b4:
                          *(void*)(this_ptr + 1) = 0x18;
                          if (iVar26 < 1) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < -7;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -1;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(byte *)((int64_t)this_ptr + 0x14) =
                               (byte)(uVar19 >> ((byte)iVar26 & 0x1f)) & 1;
                          *(void*)(this_ptr + 7) = 0;
                          *(void*)(this_ptr + 1) = 0x19;
                          local_98 = auVar50;
joined_r0x00ea4d7f:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 7) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff | *(int *)(this_ptr + 7) << 8
                          ;
                          *(void*)(this_ptr + 1) = 0x1a;
joined_r0x00ea4df6:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                          *(uint *)(this_ptr + 7) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff | *(int *)(this_ptr + 7) << 8
                          ;
                          *(void*)(this_ptr + 1) = 0x1b;
joined_r0x00ea4e66:
                          if (iVar26 < 8) {
                            puVar54 = (void*)*this_ptr;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                              *(uint *)(this_ptr + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((int64_t)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(this_ptr + 4);
                          }
                          uVar57 = SUB84(auVar51,0);
                          *(int *)((int64_t)this_ptr + 0x24) = iVar26 + -8;
                          uVar19 = uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff |
                                   *(int *)(this_ptr + 7) << 8;
                          *(uint *)(this_ptr + 7) = uVar19;
                          uVar24 = 0xfffffffc;
                          if (((int)uVar19 < 0) ||
                             (uVar41 = 0,
                             (int)(*(int *)(this_ptr + 5) * 100000 | 10U) < (int)uVar19)) {
LAB_00ea68ff:
                            uVar19 = (uint)local_38;
                            _local_60 = uVar22;
                            goto LAB_00ea7aff;
                          }
                          while (auVar51 = (uint8_t  [8])(uint64_t)uVar41, auVar50 = local_98,
                                (int)uVar41 < 0x10) {
switchD_00ea4a00_caseD_1c:
                            local_98 = auVar50;
                            *(void*)(this_ptr + 1) = 0x1c;
                            iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                            if (iVar26 < 1) {
                              puVar54 = (void*)*this_ptr;
                              iVar39 = *(int *)(puVar54 + 1);
                              iVar31 = iVar26;
                              do {
                                iVar39 = iVar39 + -1;
                                auVar50 = local_98;
                                if (iVar39 == -1) goto LAB_00ea68fd;
                                pbVar5 = (byte *)*puVar54;
                                uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                *(uint *)(this_ptr + 4) = uVar19;
                                iVar26 = iVar31 + 8;
                                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                *puVar54 = pbVar5 + 1;
                                *(int *)(puVar54 + 1) = iVar39;
                                piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                *piVar34 = *piVar34 + 1;
                                if (*piVar34 == 0) {
                                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                }
                                bVar55 = iVar31 < -7;
                                iVar31 = iVar26;
                              } while (bVar55);
                            }
                            else {
                              uVar19 = *(uint *)(this_ptr + 4);
                            }
                            *(uint *)((int64_t)this_ptr + 0x24) = iVar26 - 1U;
                            *(bool *)((int64_t)this_ptr + (int64_t)SUB84(auVar51,0) + 0xd7c) =
                                 (uVar19 >> (iVar26 - 1U & 0x1f) & 1) != 0;
                            uVar41 = SUB84(auVar51,0) + 1;
                          }
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd6c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd5c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd4c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd3c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd2c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd1c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xd0c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xcfc) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xcec) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xcdc) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xccc) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xcbc) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xcac) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xc9c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xc8c) =
                               (uint8_t  [16])0x0;
                          *(uint8_t (*) [16])((int64_t)this_ptr + 0xc7c) =
                               (uint8_t  [16])0x0;
                          auVar51 = (uint8_t  [8])0x0;
                          uVar52 = uStack_40;
                          while (iVar26 = SUB84(auVar51,0), auVar50 = local_98, iVar26 < 0x10) {
                            if (*(char *)((int64_t)this_ptr + (int64_t)iVar26 + 0xd7c) != '\0') {
                              local_70 = (uint8_t  [4])0x0;
switchD_00ea4a00_caseD_1d:
                              do {
                                local_98 = auVar50;
                                iVar26 = SUB84(auVar51,0);
                                *(void*)(this_ptr + 1) = 0x1d;
                                iVar39 = *(int *)((int64_t)this_ptr + 0x24);
                                auVar50 = local_98;
                                if (iVar39 < 1) {
                                  puVar54 = (void*)*this_ptr;
                                  iVar31 = *(int *)(puVar54 + 1);
                                  iVar21 = iVar39;
                                  do {
                                    iVar31 = iVar31 + -1;
                                    if (iVar31 == -1) goto LAB_00ea68fd;
                                    pbVar5 = (byte *)*puVar54;
                                    uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                    *(uint *)(this_ptr + 4) = uVar19;
                                    iVar39 = iVar21 + 8;
                                    *(int *)((int64_t)this_ptr + 0x24) = iVar39;
                                    *puVar54 = pbVar5 + 1;
                                    *(int *)(puVar54 + 1) = iVar31;
                                    piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                    *piVar34 = *piVar34 + 1;
                                    if (*piVar34 == 0) {
                                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                    }
                                    bVar55 = iVar21 < -7;
                                    iVar21 = iVar39;
                                  } while (bVar55);
                                }
                                else {
                                  uVar19 = *(uint *)(this_ptr + 4);
                                }
                                *(uint *)((int64_t)this_ptr + 0x24) = iVar39 - 1U;
                                if ((uVar19 >> (iVar39 - 1U & 0x1f) & 1) != 0) {
                                  *(void*)
                                   ((int64_t)this_ptr +
                                   (int64_t)(iVar26 * 0x10 + (int)local_70) + 0xc7c) = 1;
                                }
                                local_70 = (uint8_t  [4])((int)local_70 + 1);
                                uVar52 = uStack_40;
                              } while ((int)local_70 < 0x10);
                            }
                            auVar51 = (uint8_t  [8])(uint64_t)(iVar26 + 1);
                          }
                          *(void*)(this_ptr + 399) = 0;
                          iVar26 = 0;
                          lVar28 = 0;
                          do {
                            if (*(char *)((int64_t)this_ptr + lVar28 + 0xc7c) != '\0') {
                              *(char *)((int64_t)this_ptr + (int64_t)iVar26 + 0xd8c) =
                                   (char)lVar28;
                              iVar26 = *(int *)(this_ptr + 399) + 1;
                              *(int *)(this_ptr + 399) = iVar26;
                            }
                            if (*(char *)((int64_t)this_ptr + lVar28 + 0xc7d) != '\0') {
                              *(char *)((int64_t)this_ptr + (int64_t)iVar26 + 0xd8c) =
                                   (char)lVar28 + '\x01';
                              iVar26 = *(int *)(this_ptr + 399) + 1;
                              *(int *)(this_ptr + 399) = iVar26;
                            }
                            lVar28 = lVar28 + 2;
                          } while (lVar28 != 0x100);
                          if (iVar26 == 0) {
                            uVar24 = 0xfffffffc;
                            uStack_40 = uVar52;
                            auVar46 = local_80;
                          }
                          else {
                            uVar43 = iVar26 + 2;
switchD_00ea4a00_caseD_1e:
                            *(void*)(this_ptr + 1) = 0x1e;
                            iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                            if (iVar26 < 3) {
                              puVar54 = (void*)*this_ptr;
                              iVar39 = *(int *)(puVar54 + 1);
                              iVar31 = iVar26;
                              do {
                                iVar39 = iVar39 + -1;
                                if (iVar39 == -1) goto LAB_00ea68fd;
                                pbVar5 = (byte *)*puVar54;
                                uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                *(uint *)(this_ptr + 4) = uVar19;
                                iVar26 = iVar31 + 8;
                                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                *puVar54 = pbVar5 + 1;
                                *(int *)(puVar54 + 1) = iVar39;
                                piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                *piVar34 = *piVar34 + 1;
                                if (*piVar34 == 0) {
                                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                }
                                bVar55 = iVar31 < -5;
                                iVar31 = iVar26;
                              } while (bVar55);
                            }
                            else {
                              uVar19 = *(uint *)(this_ptr + 4);
                            }
                            iVar26 = iVar26 + -3;
                            uVar40 = uVar19 >> ((byte)iVar26 & 0x1f) & 7;
                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                            local_98 = auVar50;
                            if ((7 < uVar40) ||
                               (uVar24 = 0xfffffffc, auVar46 = local_80, (0x83U >> uVar40 & 1) == 0)
                               ) {
LAB_00ea4ecb:
                              uVar57 = SUB84(auVar51,0);
                              *(void*)(this_ptr + 1) = 0x1f;
                              if (iVar26 < 0xf) {
                                puVar54 = (void*)*this_ptr;
                                iVar39 = *(int *)(puVar54 + 1);
                                iVar31 = iVar26;
                                do {
                                  iVar39 = iVar39 + -1;
                                  auVar50 = local_98;
                                  if (iVar39 == -1) goto LAB_00ea68fd;
                                  pbVar5 = (byte *)*puVar54;
                                  uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                  *(uint *)(this_ptr + 4) = uVar19;
                                  iVar26 = iVar31 + 8;
                                  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                  *puVar54 = pbVar5 + 1;
                                  *(int *)(puVar54 + 1) = iVar39;
                                  piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                  *piVar34 = *piVar34 + 1;
                                  if (*piVar34 == 0) {
                                    *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                  }
                                  bVar55 = iVar31 < 7;
                                  iVar31 = iVar26;
                                } while (bVar55);
                              }
                              else {
                                uVar19 = *(uint *)(this_ptr + 4);
                              }
                              auVar51 = (uint8_t  [8])0x0;
                              *(int *)((int64_t)this_ptr + 0x24) = iVar26 + -0xf;
                              uVar22 = uVar19 >> ((byte)(iVar26 + -0xf) & 0x1f) & 0x7fff;
                              auVar46 = local_78;
                              uVar19 = uVar40;
                              if (uVar22 != 0) {
                                while (local_78 = auVar46, SUB84(auVar51,0) < (int)uVar22) {
                                  local_70 = (uint8_t  [4])0x0;
                                  auVar50 = local_98;
switchD_00ea4a00_caseD_20:
                                  local_98 = auVar50;
                                  while( true ) {
                                    *(void*)(this_ptr + 1) = 0x20;
                                    iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                                    auVar50 = local_98;
                                    if (iVar26 < 1) {
                                      puVar54 = (void*)*this_ptr;
                                      iVar39 = *(int *)(puVar54 + 1);
                                      iVar31 = iVar26;
                                      do {
                                        iVar39 = iVar39 + -1;
                                        if (iVar39 == -1) goto LAB_00ea68fd;
                                        pbVar5 = (byte *)*puVar54;
                                        uVar41 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                        *(uint *)(this_ptr + 4) = uVar41;
                                        iVar26 = iVar31 + 8;
                                        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                        *puVar54 = pbVar5 + 1;
                                        *(int *)(puVar54 + 1) = iVar39;
                                        piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                        *piVar34 = *piVar34 + 1;
                                        if (*piVar34 == 0) {
                                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                        }
                                        bVar55 = iVar31 < -7;
                                        iVar31 = iVar26;
                                      } while (bVar55);
                                    }
                                    else {
                                      uVar41 = *(uint *)(this_ptr + 4);
                                    }
                                    *(uint *)((int64_t)this_ptr + 0x24) = iVar26 - 1U;
                                    if ((uVar41 >> (iVar26 - 1U & 0x1f) & 1) == 0) break;
                                    local_70 = (uint8_t  [4])((int)local_70 + 1);
                                    uVar24 = 0xfffffffc;
                                    auVar46 = local_80;
                                    if ((int)uVar40 <= (int)local_70) goto LAB_00ea7afb;
                                  }
                                  iVar26 = SUB84(auVar51,0);
                                  if (iVar26 < 0x4652) {
                                    *(char *)((int64_t)this_ptr + (int64_t)iVar26 + 0x651e) =
                                         SUB41(local_70,0);
                                  }
                                  auVar46 = local_78;
                                  auVar51 = (uint8_t  [8])(uint64_t)(iVar26 + 1);
                                }
                                uVar52 = 0x4652;
                                if ((int)uVar22 < 0x4652) {
                                  uVar52 = (uint64_t)uVar22;
                                }
                                if (0 < (int)uVar40) {
                                  if (uVar40 < 0x20) {
                                    uVar35 = 0;
                                  }
                                  else {
                                    uVar35 = 0;
                                    if (((char)(uVar40 - 1) != -1) && (uVar40 - 1 < 0x100)) {
                                      uVar56 = uVar40 & 0xffffffe0;
                                      uVar35 = (uint64_t)uVar56;
                                      stack0xffffffffffffffa8 = g_023e2040;
                                      uStack_50 = _UNK_023e2048;
                                      local_48 = g_023e20f0;
                                      uStack_40 = _UNK_023e20f8;
                                      if (uVar56 != 0x20) {
                                        local_38 = g_023e2100;
                                      }
                                      if (uVar40 == uVar56) goto LAB_00ea6c05;
                                    }
                                  }
                                  do {
                                    auStack_5f[(uVar35 & 0xff) + 7] = (char)uVar35;
                                    bVar18 = (char)uVar35 + 1;
                                    uVar35 = (uint64_t)bVar18;
                                  } while ((int)(uint)bVar18 < (int)uVar40);
                                }
LAB_00ea6c05:
                                uVar41 = 0;
                                auVar51 = (uint8_t  [8])0x0;
                                uVar56 = uVar19;
                                if (0 < (int)uVar22) {
                                  local_48 = CONCAT44(uVar43,(uint)local_48);
                                  auStack_5f._3_4_ = (uint)pFVar49;
                                  local_88._0_4_ = (int)uVar52;
                                  auVar51 = (uint8_t  [8])1;
                                  if (1 < (int)uVar52) {
                                    auVar51 = (uint8_t  [8])uVar52;
                                  }
                                  uVar52 = 0;
                                  do {
                                    bVar18 = *(byte *)((int64_t)this_ptr + uVar52 + 0x651e);
                                    uVar35 = (uint64_t)bVar18;
                                    uVar3 = auStack_5f[uVar35 + 7];
                                    if (uVar35 != 0) {
                                      bVar25 = bVar18 - 1;
                                      uVar45 = uVar35;
                                      if (6 < bVar25) {
                                        puVar27 = (void*)(uint64_t)(uint)bVar25;
                                        if (((((uint)bVar25 <= bVar18 - 1) &&
                                             (puVar27 <= auStack_5f + uVar35 + 7)) &&
                                            (puVar27 <= auStack_5f + (uint64_t)(bVar18 - 1) + 7))
                                           && ((auStack_57 + (bVar18 - 1) <=
                                                auStack_5f + (uVar35 - (int64_t)puVar27) + 7 ||
                                               (auStack_57 + uVar35 <=
                                                auStack_5f +
                                                ((uint64_t)(bVar18 - 1) - (int64_t)puVar27) + 7)))
                                           ) {
                                          puVar27 = puVar27 + 1;
                                          if (bVar25 < 0x1f) {
                                            puVar42 = (void*)0x0;
                                          }
                                          else {
                                            uVar43 = (uint)puVar27 & 0xffffffe0;
                                            puVar42 = (void*)(uint64_t)uVar43;
                                            uVar45 = ((uint64_t)(puVar42 + -0x20) >> 5) + 1;
                                            if (puVar42 + -0x20 == (void*)0x0) {
                                              lVar28 = 0;
                                            }
                                            else {
                                              local_6c = iVar53;
                                              lVar44 = -(uVar45 & 0xfffffffffffffffe);
                                              lVar28 = 0;
                                              do {
                                                uVar37 = (uint64_t)((bVar18 - 1) + (int)lVar28);
                                                uVar24 = *(void*)(local_78 + uVar37 + 1);
                                                uVar14 = *(void*)(local_70 + uVar37 + 1);
                                                uVar17 = *(void*)(auStack_5f + uVar37);
                                                *(void*)(local_68 + lVar28 + uVar35 + 1) =
                                                     *(void*)(local_68 + uVar37 + 1);
                                                *(void*)
                                                 ((int64_t)(local_68 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar17;
                                                *(void*)(local_78 + lVar28 + uVar35 + 1) =
                                                     uVar24;
                                                *(void*)
                                                 ((int64_t)(local_78 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar14;
                                                uVar37 = (uint64_t)((bVar18 - 0x21) + (int)lVar28);
                                                uVar24 = *(void*)(local_78 + uVar37 + 1);
                                                uVar14 = *(void*)(local_70 + uVar37 + 1);
                                                uVar23 = *(void*)(local_68 + uVar37 + 5);
                                                uVar15 = *(void*)(auStack_5f + uVar37);
                                                uVar16 = *(void*)(auStack_5f + uVar37 + 4);
                                                puVar2 = (void*)
                                                         (local_88 + lVar28 + uVar35 + 1);
                                                *puVar2 = *(void*)(local_68 + uVar37 + 1);
                                                puVar2[1] = uVar23;
                                                puVar2[2] = uVar15;
                                                puVar2[3] = uVar16;
                                                *(void*)(local_98 + lVar28 + uVar35 + 1) =
                                                     uVar24;
                                                *(void*)
                                                 ((int64_t)(local_98 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar14;
                                                lVar28 = lVar28 + -0x40;
                                                lVar44 = lVar44 + 2;
                                              } while (lVar44 != 0);
                                              lVar28 = -lVar28;
                                              auVar46 = local_78;
                                              iVar53 = local_6c;
                                            }
                                            if ((uVar45 & 1) != 0) {
                                              lVar28 = uVar35 - lVar28;
                                              uVar45 = (uint64_t)((int)lVar28 - 1);
                                              uVar24 = *(void*)(local_78 + uVar45 + 1);
                                              uVar14 = *(void*)(local_70 + uVar45 + 1);
                                              uVar23 = *(void*)(local_68 + uVar45 + 5);
                                              uVar15 = *(void*)(auStack_5f + uVar45);
                                              uVar16 = *(void*)(auStack_5f + uVar45 + 4);
                                              *(void*)(local_68 + lVar28 + 1) =
                                                   *(void*)(local_68 + uVar45 + 1);
                                              *(void*)(local_68 + lVar28 + 5) = uVar23;
                                              *(void*)(auStack_5f + lVar28) = uVar15;
                                              *(void*)(auStack_5f + lVar28 + 4) = uVar16;
                                              *(void*)(local_78 + lVar28 + 1) = uVar24;
                                              *(void*)(local_70 + lVar28 + 1) = uVar14;
                                            }
                                            if (puVar27 == puVar42) goto LAB_00ea6c3e;
                                            if (((uint64_t)puVar27 & 0x18) == 0) {
                                              uVar35 = uVar35 - (int64_t)puVar42;
                                              uVar45 = (uint64_t)(byte)(bVar18 - (char)uVar43);
                                              goto LAB_00ea6c78;
                                            }
                                          }
                                          uVar43 = (uint)puVar27 & 0xfffffff8;
                                          puVar47 = (void*)(uint64_t)uVar43;
                                          lVar28 = -(int64_t)puVar42;
                                          do {
                                            *(void*)(auStack_5f + lVar28 + uVar35) =
                                                 *(void*)
                                                  (auStack_5f + ((bVar18 - 1) + (int)lVar28));
                                            lVar28 = lVar28 + -8;
                                          } while ((void*)-lVar28 != puVar47);
                                          uVar35 = uVar35 - (int64_t)puVar47;
                                          auVar46 = local_78;
                                          uVar45 = (uint64_t)(byte)(bVar18 - (char)uVar43);
                                          if (puVar27 == puVar47) goto LAB_00ea6c3e;
                                        }
                                      }
LAB_00ea6c78:
                                      cVar48 = (char)uVar45;
                                      cVar29 = cVar48;
                                      if ((uVar45 & 1) != 0) {
                                        auStack_5f[uVar35 + 7] =
                                             auStack_5f[(uint64_t)((int)uVar35 - 1) + 7];
                                        uVar35 = uVar35 - 1;
                                        cVar29 = cVar48 + -1;
                                      }
                                      if (cVar48 != '\x01') {
                                        uVar45 = uVar35 + 0xffffffff;
                                        lVar28 = 0;
                                        do {
                                          auStack_5f[lVar28 + uVar35 + 7] =
                                               auStack_5f[(uVar45 & 0xffffffff) + 7];
                                          auStack_5f[lVar28 + uVar35 + 6] =
                                               auStack_5f[(uint64_t)((int)uVar45 - 1) + 7];
                                          uVar45 = uVar45 - 2;
                                          lVar28 = lVar28 + -2;
                                        } while (-cVar29 != (char)lVar28);
                                      }
                                    }
LAB_00ea6c3e:
                                    stack0xffffffffffffffa8 = CONCAT71(auStack_57,uVar3);
                                    (&g_00001ecc + (int64_t)this_ptr)[uVar52] = uVar3;
                                    uVar52 = uVar52 + 1;
                                  } while ((uint8_t  [8])uVar52 != auVar51);
                                  pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
                                  uVar41 = 0;
                                  uVar52 = (uint64_t)local_88 & 0xffffffff;
                                  uVar43 = local_48._4_4_;
                                }
                                while (uVar22 = (uint)uVar52, local_78 = auVar46, auVar50 = local_98
                                      , uVar19 = uVar56, (int)uVar41 < (int)uVar56) {
switchD_00ea4a00_caseD_21:
                                  uVar56 = uVar41;
                                  *(void*)(this_ptr + 1) = 0x21;
                                  iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                                  if (iVar26 < 5) {
                                    puVar54 = (void*)*this_ptr;
                                    iVar39 = *(int *)(puVar54 + 1);
                                    iVar31 = iVar26;
                                    do {
                                      iVar39 = iVar39 + -1;
                                      if (iVar39 == -1) goto LAB_00ea68fd;
                                      pbVar5 = (byte *)*puVar54;
                                      uVar41 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                      *(uint *)(this_ptr + 4) = uVar41;
                                      iVar26 = iVar31 + 8;
                                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                      *puVar54 = pbVar5 + 1;
                                      *(int *)(puVar54 + 1) = iVar39;
                                      piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                      *piVar34 = *piVar34 + 1;
                                      if (*piVar34 == 0) {
                                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                      }
                                      bVar55 = iVar31 < -3;
                                      iVar31 = iVar26;
                                    } while (bVar55);
                                  }
                                  else {
                                    uVar41 = *(uint *)(this_ptr + 4);
                                  }
                                  uVar20 = uVar41 >> ((byte)(iVar26 + -5) & 0x1f) & 0x1f;
                                  *(int *)((int64_t)this_ptr + 0x24) = iVar26 + -5;
                                  auVar51 = (uint8_t  [8])0x0;
                                  auVar46 = local_78;
                                  local_98 = auVar50;
                                  if (0 < (int)uVar43) {
                                    do {
                                      uVar57 = SUB84(auVar51,0);
                                      local_98 = auVar50;
                                      while( true ) {
                                        auVar50 = local_98;
                                        if (0x13 < uVar20 - 1) {
                                          uVar19 = (uint)local_38;
                                          uVar24 = 0xfffffffc;
                                          _local_60 = uVar22;
                                          goto LAB_00ea7aff;
                                        }
switchD_00ea4a00_caseD_22:
                                        *(void*)(this_ptr + 1) = 0x22;
                                        iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                                        if (iVar26 < 1) {
                                          puVar54 = (void*)*this_ptr;
                                          iVar39 = *(int *)(puVar54 + 1);
                                          iVar31 = iVar26;
                                          do {
                                            iVar39 = iVar39 + -1;
                                            if (iVar39 == -1) goto LAB_00ea68fd;
                                            pbVar5 = (byte *)*puVar54;
                                            uVar57 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                            *(uint *)(this_ptr + 4) = uVar57;
                                            iVar26 = iVar31 + 8;
                                            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                            *puVar54 = pbVar5 + 1;
                                            *(int *)(puVar54 + 1) = iVar39;
                                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                            *piVar34 = *piVar34 + 1;
                                            if (*piVar34 == 0) {
                                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                            }
                                            bVar55 = iVar31 < -7;
                                            iVar31 = iVar26;
                                          } while (bVar55);
                                        }
                                        else {
                                          uVar57 = *(uint *)(this_ptr + 4);
                                        }
                                        uVar41 = iVar26 - 1;
                                        *(uint *)((int64_t)this_ptr + 0x24) = uVar41;
                                        if ((uVar57 >> (uVar41 & 0x1f) & 1) == 0) break;
LAB_00ea5e0c:
                                        uVar57 = SUB84(auVar51,0);
                                        *(void*)(this_ptr + 1) = 0x23;
                                        if ((int)uVar41 < 1) {
                                          puVar54 = (void*)*this_ptr;
                                          iVar26 = *(int *)(puVar54 + 1);
                                          uVar58 = uVar41;
                                          do {
                                            iVar26 = iVar26 + -1;
                                            if (iVar26 == -1) goto LAB_00ea68fd;
                                            pbVar5 = (byte *)*puVar54;
                                            uVar59 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                            *(uint *)(this_ptr + 4) = uVar59;
                                            uVar41 = uVar58 + 8;
                                            *(uint *)((int64_t)this_ptr + 0x24) = uVar41;
                                            *puVar54 = pbVar5 + 1;
                                            *(int *)(puVar54 + 1) = iVar26;
                                            piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                            *piVar34 = *piVar34 + 1;
                                            if (*piVar34 == 0) {
                                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                            }
                                            bVar55 = (int)uVar58 < -7;
                                            uVar58 = uVar41;
                                          } while (bVar55);
                                        }
                                        else {
                                          uVar59 = *(uint *)(this_ptr + 4);
                                        }
                                        *(uint *)((int64_t)this_ptr + 0x24) = uVar41 - 1;
                                        uVar20 = (uVar20 - 1) +
                                                 (uint)((uVar59 >> (uVar41 - 1 & 0x1f) & 1) == 0) *
                                                 2;
                                        local_98 = auVar50;
                                      }
                                      *(char *)((int64_t)this_ptr +
                                               (int64_t)SUB84(auVar51,0) + 0xab70 +
                                               (int64_t)(int)uVar56 * 0x102) = (char)uVar20;
                                      uVar41 = SUB84(auVar51,0) + 1;
                                      auVar51 = (uint8_t  [8])(uint64_t)uVar41;
                                      auVar46 = local_78;
                                      local_98 = auVar50;
                                    } while ((int)uVar41 < (int)uVar43);
                                  }
                                  uVar52 = (uint64_t)uVar22;
                                  uVar41 = uVar56 + 1;
                                  uVar56 = uVar19;
                                }
                                auStack_5f._3_4_ = SUB84(pFVar49,0);
                                local_88._0_4_ = uVar22;
                                if ((int)uVar56 < 1) {
                                  uVar56 = 0;
                                }
                                else {
                                  _local_68 = (uint64_t)uVar40;
                                  if ((int)uVar43 < 1) {
                                    puVar36 = &UNK_0000b17c + (int64_t)this_ptr;
                                    puVar54 = this_ptr + 0x156e;
                                    uVar52 = 0;
                                    do {
                                      FUN_00ea9250(puVar54,FUN_00003060 + (int64_t)puVar36,0x20,0);
                                      *(void*)((int64_t)this_ptr + uVar52 * 4 + 0xfa0c) =
                                           0x20;
                                      uVar52 = uVar52 + 1;
                                      puVar36 = puVar36 + 0x408;
                                      puVar54 = (void*)((int64_t)puVar54 + 0x102);
                                    } while (_local_68 != uVar52);
                                  }
                                  else {
                                    local_48 = CONCAT44(uVar43,(uint)local_48);
                                    if (uVar43 < 8) {
                                      _local_68 = -_local_68;
                                      lVar28 = 0xab70;
                                      uVar52 = 0x3e83;
                                      lVar44 = 0xe1dc;
                                      uVar22 = uVar43;
                                      do {
                                        bVar18 = *(byte *)((int64_t)this_ptr + lVar28);
                                        uVar19 = 0x20;
                                        if (bVar18 < 0x20) {
                                          uVar19 = (uint)bVar18;
                                        }
                                        uVar43 = local_48._4_4_;
                                        uVar41 = (uint)bVar18;
                                        if (uVar22 != 1) {
                                          bVar25 = *(byte *)((int64_t)this_ptr + lVar28 + 1);
                                          uVar41 = (uint)bVar18;
                                          if ((uint)bVar18 < (uint)bVar25) {
                                            uVar41 = (uint)bVar25;
                                          }
                                          if (bVar25 < uVar19) {
                                            uVar19 = (uint)bVar25;
                                          }
                                          if (uVar22 != 2) {
                                            bVar18 = *(byte *)((int64_t)this_ptr + lVar28 + 2);
                                            if (uVar41 < bVar18) {
                                              uVar41 = (uint)bVar18;
                                            }
                                            if (bVar18 < uVar19) {
                                              uVar19 = (uint)bVar18;
                                            }
                                            if (uVar22 != 3) {
                                              bVar18 = *(byte *)((int64_t)this_ptr + lVar28 + 3);
                                              if (uVar41 < bVar18) {
                                                uVar41 = (uint)bVar18;
                                              }
                                              if (bVar18 < uVar19) {
                                                uVar19 = (uint)bVar18;
                                              }
                                              if (uVar22 != 4) {
                                                bVar18 = *(byte *)((int64_t)this_ptr + lVar28 + 4)
                                                ;
                                                if (uVar41 < bVar18) {
                                                  uVar41 = (uint)bVar18;
                                                }
                                                uVar22 = (uint)bVar18;
                                                if (uVar19 <= bVar18) {
                                                  uVar22 = uVar19;
                                                }
                                                uVar19 = uVar22;
                                                if (local_48._4_4_ != 5) {
                                                  bVar18 = *(byte *)((int64_t)this_ptr +
                                                                    lVar28 + 5);
                                                  uVar57 = (uint)bVar18;
                                                  uVar58 = (uint)bVar18;
                                                  if (bVar18 <= uVar41) {
                                                    uVar58 = uVar41;
                                                  }
                                                  if (uVar22 <= bVar18) {
                                                    uVar57 = uVar22;
                                                  }
                                                  uVar19 = uVar57;
                                                  uVar41 = uVar58;
                                                  if (local_48._4_4_ != 6) {
                                                    bVar18 = *(byte *)((int64_t)this_ptr +
                                                                      lVar28 + 6);
                                                    uVar19 = (uint)bVar18;
                                                    uVar41 = uVar19;
                                                    if (uVar19 <= uVar58) {
                                                      uVar41 = uVar58;
                                                    }
                                                    if (uVar57 <= bVar18) {
                                                      uVar19 = uVar57;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        local_80._0_4_ = uVar19;
                                        uStack_40 = uVar52;
                                        FUN_00ea9250(lVar28 + (int64_t)this_ptr,
                                                     lVar44 + (int64_t)this_ptr,uVar19,uVar41);
                                        *(void*)((int64_t)this_ptr + uStack_40 * 4) =
                                             local_80._0_4_;
                                        lVar28 = lVar28 + 0x102;
                                        uVar52 = uStack_40 + 1;
                                        lVar44 = lVar44 + 0x408;
                                        uVar22 = uVar43;
                                      } while (_local_68 + uStack_40 != 0x3e82);
                                    }
                                    else {
                                      lVar28 = (int64_t)this_ptr + 0xab74;
                                      puVar54 = this_ptr + 0x156e;
                                      uVar52 = 0;
                                      do {
                                        uVar61 = 0;
                                        uVar62 = 0;
                                        uVar63 = 0;
                                        uVar64 = 0;
                                        uVar35 = 0;
                                        uVar65 = 0;
                                        uVar66 = 0;
                                        uVar67 = 0;
                                        uVar68 = 0;
                                        uVar56 = g_023de310;
                                        uVar22 = _UNK_023de314;
                                        uVar19 = _UNK_023de318;
                                        uVar41 = _UNK_023de31c;
                                        uVar57 = g_023de310;
                                        uVar58 = _UNK_023de314;
                                        uVar59 = _UNK_023de318;
                                        uVar60 = _UNK_023de31c;
                                        do {
                                          in_XMM4 = pmovzxbd(in_XMM4,*(void*)
                                                                      (lVar28 + -4 + uVar35));
                                          in_XMM5 = pmovzxbd(in_XMM5,*(void*)
                                                                      (lVar28 + uVar35));
                                          uVar6 = in_XMM4._0_4_;
                                          uVar61 = (uVar61 < uVar6) * uVar6 |
                                                   (uVar61 >= uVar6) * uVar61;
                                          uVar8 = in_XMM4._4_4_;
                                          uVar62 = (uVar62 < uVar8) * uVar8 |
                                                   (uVar62 >= uVar8) * uVar62;
                                          uVar10 = in_XMM4._8_4_;
                                          uVar63 = (uVar63 < uVar10) * uVar10 |
                                                   (uVar63 >= uVar10) * uVar63;
                                          uVar12 = in_XMM4._12_4_;
                                          uVar64 = (uVar64 < uVar12) * uVar12 |
                                                   (uVar64 >= uVar12) * uVar64;
                                          uVar7 = in_XMM5._0_4_;
                                          uVar65 = (uVar65 < uVar7) * uVar7 |
                                                   (uVar65 >= uVar7) * uVar65;
                                          uVar9 = in_XMM5._4_4_;
                                          uVar66 = (uVar66 < uVar9) * uVar9 |
                                                   (uVar66 >= uVar9) * uVar66;
                                          uVar11 = in_XMM5._8_4_;
                                          uVar67 = (uVar67 < uVar11) * uVar11 |
                                                   (uVar67 >= uVar11) * uVar67;
                                          uVar13 = in_XMM5._12_4_;
                                          uVar68 = (uVar68 < uVar13) * uVar13 |
                                                   (uVar68 >= uVar13) * uVar68;
                                          uVar56 = ((int)uVar6 < (int)uVar56) * uVar6 |
                                                   ((int)uVar6 >= (int)uVar56) * uVar56;
                                          uVar22 = ((int)uVar8 < (int)uVar22) * uVar8 |
                                                   ((int)uVar8 >= (int)uVar22) * uVar22;
                                          uVar19 = ((int)uVar10 < (int)uVar19) * uVar10 |
                                                   ((int)uVar10 >= (int)uVar19) * uVar19;
                                          uVar41 = ((int)uVar12 < (int)uVar41) * uVar12 |
                                                   ((int)uVar12 >= (int)uVar41) * uVar41;
                                          uVar57 = ((int)uVar7 < (int)uVar57) * uVar7 |
                                                   ((int)uVar7 >= (int)uVar57) * uVar57;
                                          uVar58 = ((int)uVar9 < (int)uVar58) * uVar9 |
                                                   ((int)uVar9 >= (int)uVar58) * uVar58;
                                          uVar59 = ((int)uVar11 < (int)uVar59) * uVar11 |
                                                   ((int)uVar11 >= (int)uVar59) * uVar59;
                                          uVar60 = ((int)uVar13 < (int)uVar60) * uVar13 |
                                                   ((int)uVar13 >= (int)uVar60) * uVar60;
                                          uVar35 = uVar35 + 8;
                                        } while ((uVar43 & 0xfffffff8) != uVar35);
                                        uVar61 = (uVar61 < uVar65) * uVar65 |
                                                 (uVar61 >= uVar65) * uVar61;
                                        uVar62 = (uVar62 < uVar66) * uVar66 |
                                                 (uVar62 >= uVar66) * uVar62;
                                        uVar63 = (uVar63 < uVar67) * uVar67 |
                                                 (uVar63 >= uVar67) * uVar63;
                                        uVar64 = (uVar64 < uVar68) * uVar68 |
                                                 (uVar64 >= uVar68) * uVar64;
                                        uVar61 = (uVar63 < uVar61) * uVar61 |
                                                 (uVar63 >= uVar61) * uVar63;
                                        uVar62 = (uVar64 < uVar62) * uVar62 |
                                                 (uVar64 >= uVar62) * uVar64;
                                        uVar61 = (uVar62 < uVar61) * uVar61 |
                                                 (uVar62 >= uVar61) * uVar62;
                                        uVar56 = ((int)uVar57 < (int)uVar56) * uVar57 |
                                                 ((int)uVar57 >= (int)uVar56) * uVar56;
                                        uVar22 = ((int)uVar58 < (int)uVar22) * uVar58 |
                                                 ((int)uVar58 >= (int)uVar22) * uVar22;
                                        uVar19 = ((int)uVar59 < (int)uVar19) * uVar59 |
                                                 ((int)uVar59 >= (int)uVar19) * uVar19;
                                        uVar41 = ((int)uVar60 < (int)uVar41) * uVar60 |
                                                 ((int)uVar60 >= (int)uVar41) * uVar41;
                                        uVar56 = ((int)uVar56 < (int)uVar19) * uVar56 |
                                                 ((int)uVar56 >= (int)uVar19) * uVar19;
                                        uVar22 = ((int)uVar22 < (int)uVar41) * uVar22 |
                                                 ((int)uVar22 >= (int)uVar41) * uVar41;
                                        uVar56 = ((int)uVar56 < (int)uVar22) * uVar56 |
                                                 ((int)uVar56 >= (int)uVar22) * uVar22;
                                        for (uVar35 = (uint64_t)(uVar43 & 0xfffffff8);
                                            uVar35 != uVar43; uVar35 = uVar35 + 1) {
                                          bVar18 = *(byte *)((int64_t)puVar54 + uVar35);
                                          if (uVar61 < bVar18) {
                                            uVar61 = (uint)bVar18;
                                          }
                                          if ((int)(uint)bVar18 < (int)uVar56) {
                                            uVar56 = (uint)bVar18;
                                          }
                                        }
                                        uStack_40 = uVar52;
                                        FUN_00ea9250((int64_t)this_ptr + uVar52 * 0x102 + 0xab70,
                                                     (int64_t)this_ptr + uVar52 * 0x408 + 0xe1dc,
                                                     uVar56);
                                        *(uint *)((int64_t)this_ptr + uStack_40 * 4 + 0xfa0c) =
                                             uVar56;
                                        uVar52 = uStack_40 + 1;
                                        lVar28 = lVar28 + 0x102;
                                        puVar54 = (void*)((int64_t)puVar54 + 0x102);
                                      } while (uVar52 != _local_68);
                                      uVar43 = local_48._4_4_;
                                      uVar56 = uVar40;
                                    }
                                  }
                                }
                                iVar26 = *(int *)(this_ptr + 399);
                                local_b4 = *(int *)(this_ptr + 5) * 100000;
                                ___bzero();
                                local_80._4_4_ = 0;
                                local_80._0_4_ = iVar26 + 1;
                                piVar34 = (int *)(this_ptr + 0x3d9);
                                lVar28 = 0;
                                do {
                                  cVar29 = (char)lVar28;
                                  (&g_00001e8b + (int64_t)this_ptr)[lVar28] = cVar29 + -1;
                                  (&g_00001e8a + (int64_t)this_ptr)[lVar28] = cVar29 + -2;
                                  (&g_00001e89 + (int64_t)this_ptr)[lVar28] = cVar29 + -3;
                                  *(char *)((int64_t)this_ptr + (int64_t)(&g_00001e88 + lVar28)
                                           ) = cVar29 + -4;
                                  (&g_00001e87 + (int64_t)this_ptr)[lVar28] = cVar29 + -5;
                                  (&g_00001e86 + (int64_t)this_ptr)[lVar28] = cVar29 + -6;
                                  (&g_00001e85 + (int64_t)this_ptr)[lVar28] = cVar29 + -7;
                                  (&g_00001e84 + (int64_t)this_ptr)[lVar28] = cVar29 + -8;
                                  (&g_00001e83 + (int64_t)this_ptr)[lVar28] = cVar29 + -9;
                                  (&g_00001e82 + (int64_t)this_ptr)[lVar28] = cVar29 + -10;
                                  (&g_00001e81 + (int64_t)this_ptr)[lVar28] = cVar29 + -0xb;
                                  *(char *)((int64_t)this_ptr + (int64_t)(&g_00001e80 + lVar28)
                                           ) = cVar29 + -0xc;
                                  (&g_00001e7f + (int64_t)this_ptr)[lVar28] = cVar29 + -0xd;
                                  (&g_00001e7e + (int64_t)this_ptr)[lVar28] = cVar29 + -0xe;
                                  (&g_00001e7d + (int64_t)this_ptr)[lVar28] = cVar29 + -0xf;
                                  (&g_00001e7c + (int64_t)this_ptr)[lVar28] = cVar29 + -0x10;
                                  *piVar34 = (int)lVar28 + 0xff0;
                                  lVar28 = lVar28 + -0x10;
                                  piVar34 = piVar34 + -1;
                                } while (lVar28 != -0x100);
                                if ((int)local_88._0_4_ < 1) {
                                  uVar24 = 0xfffffffc;
                                  uVar57 = 0x100;
                                  _local_68 = 0;
                                  iVar53 = 0;
                                  uStack_40 = 0;
                                  uVar19 = (uint)local_38;
                                  pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
                                  _local_60 = local_88._0_4_;
                                  goto LAB_00ea7aff;
                                }
                                local_90 = (uint8_t  [8])
                                           (uint64_t)*(byte *)((int64_t)this_ptr + 0x1ecc);
                                local_a4 = *(uint *)((int64_t)this_ptr +
                                                    (int64_t)local_90 * 4 + 0xfa0c);
                                lVar28 = (int64_t)local_90 * 0x408;
                                local_d8 = (int64_t)this_ptr + lVar28 + 0xc9ac;
                                local_78 = (uint8_t  [8])((int64_t)this_ptr + lVar28 + 0xe1dc);
                                local_c8 = &UNK_0000b17c + (int64_t)this_ptr + lVar28;
                                auVar51 = (uint8_t  [8])0x100;
                                iVar53 = 0x31;
                                _local_68 = _local_68 & 0xffffffff00000000;
                                local_48 = (uint64_t)local_a4;
                                uStack_40 = 0;
                                pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
                                auVar50 = local_98;
                                uVar22 = local_88._0_4_;
switchD_00ea4a00_caseD_24:
                                uVar52 = local_48;
                                auStack_5f._3_4_ = SUB84(pFVar49,0);
                                local_48 = CONCAT44(uVar43,(uint)local_48);
                                *(void*)(this_ptr + 1) = 0x24;
                                iVar26 = *(int *)((int64_t)this_ptr + 0x24);
                                local_88 = auVar51;
                                if (iVar26 < (int)(uint)local_48) {
                                  puVar54 = (void*)*this_ptr;
                                  iVar39 = *(int *)(puVar54 + 1);
                                  do {
                                    iVar39 = iVar39 + -1;
                                    if (iVar39 == -1) {
                                      uVar24 = 0;
                                      uVar19 = (uint)local_38;
                                      goto LAB_00ea67a7;
                                    }
                                    pbVar5 = (byte *)*puVar54;
                                    uVar43 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                    *(uint *)(this_ptr + 4) = uVar43;
                                    iVar26 = iVar26 + 8;
                                    *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                    *puVar54 = pbVar5 + 1;
                                    *(int *)(puVar54 + 1) = iVar39;
                                    piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                    *piVar34 = *piVar34 + 1;
                                    if (*piVar34 == 0) {
                                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                    }
                                  } while (iVar26 < (int)(uint)local_48);
                                }
                                else {
                                  uVar43 = *(uint *)(this_ptr + 4);
                                }
                                iVar26 = iVar26 - (uint)local_48;
                                uVar19 = ~(-1 << ((byte)uVar52 & 0x1f)) &
                                         uVar43 >> ((byte)iVar26 & 0x1f);
                                *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                iVar39 = (uint)local_48;
                                while( true ) {
                                  local_38 = (uint64_t)uVar19;
                                  uVar24 = 0xfffffffc;
                                  if (0x14 < iVar39) break;
                                  if ((int)uVar19 <= *(int *)(local_c8 + (int64_t)iVar39 * 4)) {
                                    local_48 = CONCAT44(local_48._4_4_,iVar39);
                                    uVar43 = uVar19 - *(int *)(local_d8 + (int64_t)iVar39 * 4);
                                    if (0x101 < uVar43) goto LAB_00ea67a7;
                                    local_98 = (uint8_t  [8])
                                               (uint64_t)
                                               *(uint *)((int64_t)local_78 + (uint64_t)uVar43 * 4)
                                    ;
                                    pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
                                    auVar51 = local_88;
                                    uVar43 = local_48._4_4_;
                                    goto LAB_00ea6ffe;
                                  }
                                  local_48._0_4_ = iVar39 + 1;
                                  pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
LAB_00ea6654:
                                  *(void*)(this_ptr + 1) = 0x25;
                                  auStack_5f._3_4_ = SUB84(pFVar49,0);
                                  if (iVar26 < 1) {
                                    puVar54 = (void*)*this_ptr;
                                    iVar39 = *(int *)(puVar54 + 1);
                                    iVar31 = iVar26;
                                    do {
                                      iVar39 = iVar39 + -1;
                                      if (iVar39 == -1) {
                                        uVar24 = 0;
                                        local_98 = auVar50;
                                        goto LAB_00ea6756;
                                      }
                                      pbVar5 = (byte *)*puVar54;
                                      uVar43 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
                                      *(uint *)(this_ptr + 4) = uVar43;
                                      iVar26 = iVar31 + 8;
                                      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                      *puVar54 = pbVar5 + 1;
                                      *(int *)(puVar54 + 1) = iVar39;
                                      piVar34 = (int *)((int64_t)puVar54 + 0xc);
                                      *piVar34 = *piVar34 + 1;
                                      if (*piVar34 == 0) {
                                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                      }
                                      bVar55 = iVar31 < -7;
                                      iVar31 = iVar26;
                                    } while (bVar55);
                                  }
                                  else {
                                    uVar43 = *(uint *)(this_ptr + 4);
                                  }
                                  iVar26 = iVar26 + -1;
                                  local_cc = uVar43 >> ((byte)iVar26 & 0x1f) & 1;
                                  *(int *)((int64_t)this_ptr + 0x24) = iVar26;
                                  uVar19 = local_cc + (uint)local_38 * 2;
                                  iVar39 = (uint)local_48;
                                }
                                local_48 = CONCAT44(local_48._4_4_,iVar39);
                                local_98 = auVar50;
                                local_38._0_4_ = uVar19;
LAB_00ea6756:
                                uVar19 = (uint)local_38;
                                goto LAB_00ea676a;
                              }
                              uVar24 = 0xfffffffc;
                              uVar22 = 0;
                              goto LAB_00ea68ff;
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
        else {
          local_98 = auVar50;
          local_88 = auVar51;
          _local_60 = uVar22;
          uVar24 = (*puVar54[7])(uVar19,1);
          this_ptr[0x18b] = uVar24;
          lVar28 = (*puVar54[7])(extraout_XMM0_Qa,1);
          this_ptr[0x18c] = lVar28;
          uVar24 = 0xfffffffd;
          uVar43 = local_48._4_4_;
          if (this_ptr[0x18b] == 0) {
            uVar19 = (uint)local_38;
            uVar57 = local_88._0_4_;
            pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
            goto LAB_00ea7aff;
          }
          pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
          auVar50 = local_98;
          auVar51 = local_88;
          uVar22 = _local_60;
          auVar46 = local_80;
          if (lVar28 != 0) goto switchD_00ea4a00_caseD_e;
        }
      }
    }
  }
  goto LAB_00ea7afb;
LAB_00ea67a7:
  local_98 = auVar50;
LAB_00ea676a:
  pFVar49 = (FILE *)(uint64_t)(uint)auStack_5f._3_4_;
  uVar43 = local_48._4_4_;
  _local_60 = uVar22;
  uVar57 = local_88._0_4_;
  goto LAB_00ea7aff;
LAB_00ea88b5:
  bVar55 = -1 < iVar33;
  iVar33 = iVar26;
  if (bVar55) {
    lVar28 = (int64_t)(int)local_68;
    if ((int)local_68 <= local_b4) {
      local_68 = (uint8_t  [4])local_b4;
    }
    do {
      if ((int)local_68 == lVar28) goto LAB_00ea890a;
      *(uint *)(this_ptr[0x18a] + lVar28 * 4) = (uint)bVar18;
      lVar28 = lVar28 + 1;
      iVar26 = iVar33 + -1;
      bVar55 = 1 < iVar33;
      iVar33 = iVar26;
    } while (bVar55);
    uVar23 = (uint32_t)lVar28;
LAB_00ea88f5:
    _local_68 = CONCAT44(auStack_64,uVar23);
    iVar33 = iVar26;
  }
  goto LAB_00ea6ffe;
LAB_00ea890a:
  goto LAB_00ea68ff;
LAB_00ea68fd:
  local_98 = auVar50;
  uVar57 = SUB84(auVar51,0);
  uVar24 = 0;
  goto LAB_00ea68ff;
  while( true ) {
    iVar39 = *(int *)((int64_t)this_ptr + uVar52 * 4 + 0x454);
    if (iVar39 < iVar26) {
      uVar52 = uVar52 + 3;
      goto LAB_00ea8160;
    }
    iVar26 = *(int *)((int64_t)this_ptr + uVar52 * 4 + 0x458);
    uVar52 = uVar52 + 4;
    if (iVar26 < iVar39) goto LAB_00ea8160;
    if (uVar52 == 0x100) break;
LAB_00ea7c35:
    iVar39 = *(int *)((int64_t)this_ptr + uVar52 * 4 + 0x44c);
    local_6c = iVar53;
    if (iVar39 < iVar26) {
      uVar52 = uVar52 + 1;
      goto LAB_00ea8160;
    }
    iVar26 = *(int *)((int64_t)this_ptr + uVar52 * 4 + 0x450);
    if (iVar26 < iVar39) {
      uVar52 = uVar52 + 2;
      goto LAB_00ea8160;
    }
  }
  *(void*)(this_ptr + 2) = 0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)(this_ptr + 0x18e) = 0xffffffff;
  *(void*)(this_ptr + 1) = 2;
  if (1 < *(int *)((int64_t)this_ptr + 0x34)) {
    _fwrite(*(void **)PTR____stderrp_024a98a0,1,SUB84(local_78,0),pFVar49);
  }
  if (*(char *)((int64_t)this_ptr + 0x2c) == '\0') {
    lVar28 = this_ptr[0x18a];
    if ((int)local_68 < 1) {
      uVar52 = 0;
    }
    else {
      if (local_68 == (uint8_t  [4])0x1) {
        uVar35 = 0;
      }
      else {
        uVar43 = 0x100;
        uVar35 = 0;
        do {
          uVar52 = (uint64_t)*(byte *)(lVar28 + uVar35 * 4);
          puVar1 = (uint *)(lVar28 + (int64_t)*(int *)((int64_t)this_ptr + uVar52 * 4 + 0x448) *
                                     4);
          *puVar1 = *puVar1 | uVar43 - 0x100;
          piVar34 = (int *)((int64_t)this_ptr + uVar52 * 4 + 0x448);
          *piVar34 = *piVar34 + 1;
          uVar52 = (uint64_t)*(byte *)(lVar28 + 4 + uVar35 * 4);
          puVar1 = (uint *)(lVar28 + (int64_t)*(int *)((int64_t)this_ptr + uVar52 * 4 + 0x448) *
                                     4);
          *puVar1 = *puVar1 | uVar43;
          piVar34 = (int *)((int64_t)this_ptr + uVar52 * 4 + 0x448);
          *piVar34 = *piVar34 + 1;
          uVar35 = uVar35 + 2;
          uVar43 = uVar43 + 0x200;
        } while (((uint)local_68 & 0xfffffffe) != uVar35);
      }
      uVar52 = _local_68 & 0xffffffff;
      if ((_local_68 & 1) != 0) {
        uVar52 = (uint64_t)*(byte *)(lVar28 + uVar35 * 4);
        puVar1 = (uint *)(lVar28 + (int64_t)*(int *)((int64_t)this_ptr + uVar52 * 4 + 0x448) * 4)
        ;
        *puVar1 = *puVar1 | (int)uVar35 << 8;
        piVar34 = (int *)((int64_t)this_ptr + uVar52 * 4 + 0x448);
        *piVar34 = *piVar34 + 1;
        uVar52 = _local_68 & 0xffffffff;
      }
    }
    uVar43 = *(uint *)(lVar28 + (int64_t)*(int *)(this_ptr + 7) * 4) >> 8;
    *(uint *)((int64_t)this_ptr + 0x3c) = uVar43;
    *(void*)((int64_t)this_ptr + 0x444) = 0;
    if (*(char *)((int64_t)this_ptr + 0x14) == '\0') {
      if ((uint)(*(int *)(this_ptr + 5) * 100000) <= uVar43) {
        return 1;
      }
      uVar43 = *(uint *)(lVar28 + (uint64_t)uVar43 * 4);
      *(uint *)(this_ptr + 8) = uVar43 & 0xff;
      *(uint *)((int64_t)this_ptr + 0x3c) = uVar43 >> 8;
      *(void*)((int64_t)this_ptr + 0x444) = 1;
      uVar24 = 0;
    }
    else {
      this_ptr[3] = 0;
      if ((uint)(*(int *)(this_ptr + 5) * 100000) <= uVar43) {
        return 1;
      }
      uVar43 = *(uint *)(lVar28 + (uint64_t)uVar43 * 4);
      *(uint *)((int64_t)this_ptr + 0x3c) = uVar43 >> 8;
      *(void*)((int64_t)this_ptr + 0x444) = 1;
      iVar26 = g_0278a020;
      *(void*)((int64_t)this_ptr + 0x1c) = 1;
      *(int *)(this_ptr + 3) = iVar26 + -1;
      *(uint *)(this_ptr + 8) = (uint)(iVar26 + -1 == 1) ^ uVar43 & 0xff;
      uVar24 = 0;
    }
  }
  else {
    *(void*)((int64_t)this_ptr + 0x84c) = this_ptr[0x89];
    *(void*)((int64_t)this_ptr + 0x854) = this_ptr[0x8a];
    *(void*)((int64_t)this_ptr + 0x85c) = this_ptr[0x8b];
    *(void*)((int64_t)this_ptr + 0x864) = this_ptr[0x8c];
    *(void*)((int64_t)this_ptr + 0x86c) = this_ptr[0x8d];
    *(void*)((int64_t)this_ptr + 0x874) = this_ptr[0x8e];
    *(void*)((int64_t)this_ptr + 0x87c) = this_ptr[0x8f];
    *(void*)((int64_t)this_ptr + 0x884) = this_ptr[0x90];
    *(void*)((int64_t)this_ptr + 0x88c) = this_ptr[0x91];
    *(void*)((int64_t)this_ptr + 0x894) = this_ptr[0x92];
    *(void*)((int64_t)this_ptr + 0x89c) = this_ptr[0x93];
    *(void*)((int64_t)this_ptr + 0x8a4) = this_ptr[0x94];
    *(void*)((int64_t)this_ptr + 0x8ac) = this_ptr[0x95];
    *(void*)((int64_t)this_ptr + 0x8b4) = this_ptr[0x96];
    *(void*)((int64_t)this_ptr + 0x8bc) = this_ptr[0x97];
    *(void*)((int64_t)this_ptr + 0x8c4) = this_ptr[0x98];
    *(void*)((int64_t)this_ptr + 0x8cc) = this_ptr[0x99];
    *(void*)((int64_t)this_ptr + 0x8d4) = this_ptr[0x9a];
    *(void*)((int64_t)this_ptr + 0x8dc) = this_ptr[0x9b];
    *(void*)((int64_t)this_ptr + 0x8e4) = this_ptr[0x9c];
    *(void*)((int64_t)this_ptr + 0x8ec) = this_ptr[0x9d];
    *(void*)((int64_t)this_ptr + 0x8f4) = this_ptr[0x9e];
    *(void*)((int64_t)this_ptr + 0x8fc) = this_ptr[0x9f];
    *(void*)((int64_t)this_ptr + 0x904) = this_ptr[0xa0];
    *(void*)((int64_t)this_ptr + 0x90c) = this_ptr[0xa1];
    *(void*)((int64_t)this_ptr + 0x914) = this_ptr[0xa2];
    *(void*)((int64_t)this_ptr + 0x91c) = this_ptr[0xa3];
    *(void*)((int64_t)this_ptr + 0x924) = this_ptr[0xa4];
    *(void*)((int64_t)this_ptr + 0x92c) = this_ptr[0xa5];
    *(void*)((int64_t)this_ptr + 0x934) = this_ptr[0xa6];
    *(void*)((int64_t)this_ptr + 0x93c) = this_ptr[0xa7];
    *(void*)((int64_t)this_ptr + 0x944) = this_ptr[0xa8];
    *(void*)((int64_t)this_ptr + 0x94c) = this_ptr[0xa9];
    *(void*)((int64_t)this_ptr + 0x954) = this_ptr[0xaa];
    *(void*)((int64_t)this_ptr + 0x95c) = this_ptr[0xab];
    *(void*)((int64_t)this_ptr + 0x964) = this_ptr[0xac];
    *(void*)((int64_t)this_ptr + 0x96c) = this_ptr[0xad];
    *(void*)((int64_t)this_ptr + 0x974) = this_ptr[0xae];
    *(void*)((int64_t)this_ptr + 0x97c) = this_ptr[0xaf];
    *(void*)((int64_t)this_ptr + 0x984) = this_ptr[0xb0];
    *(void*)((int64_t)this_ptr + 0x98c) = this_ptr[0xb1];
    *(void*)((int64_t)this_ptr + 0x994) = this_ptr[0xb2];
    *(void*)((int64_t)this_ptr + 0x99c) = this_ptr[0xb3];
    *(void*)((int64_t)this_ptr + 0x9a4) = this_ptr[0xb4];
    *(void*)((int64_t)this_ptr + 0x9ac) = this_ptr[0xb5];
    *(void*)((int64_t)this_ptr + 0x9b4) = this_ptr[0xb6];
    *(void*)((int64_t)this_ptr + 0x9bc) = this_ptr[0xb7];
    *(void*)((int64_t)this_ptr + 0x9c4) = this_ptr[0xb8];
    *(void*)((int64_t)this_ptr + 0x9cc) = this_ptr[0xb9];
    *(void*)((int64_t)this_ptr + 0x9d4) = this_ptr[0xba];
    *(void*)((int64_t)this_ptr + 0x9dc) = this_ptr[0xbb];
    *(void*)((int64_t)this_ptr + 0x9e4) = this_ptr[0xbc];
    *(void*)((int64_t)this_ptr + 0x9ec) = this_ptr[0xbd];
    *(void*)((int64_t)this_ptr + 0x9f4) = this_ptr[0xbe];
    *(void*)((int64_t)this_ptr + 0x9fc) = this_ptr[0xbf];
    *(void*)((int64_t)this_ptr + 0xa04) = this_ptr[0xc0];
    *(void*)((int64_t)this_ptr + 0xa0c) = this_ptr[0xc1];
    *(void*)((int64_t)this_ptr + 0xa14) = this_ptr[0xc2];
    *(void*)((int64_t)this_ptr + 0xa1c) = this_ptr[0xc3];
    *(void*)((int64_t)this_ptr + 0xa24) = this_ptr[0xc4];
    *(void*)((int64_t)this_ptr + 0xa2c) = this_ptr[0xc5];
    *(void*)((int64_t)this_ptr + 0xa34) = this_ptr[0xc6];
    *(void*)((int64_t)this_ptr + 0xa3c) = this_ptr[199];
    *(void*)((int64_t)this_ptr + 0xa44) = this_ptr[200];
    *(void*)((int64_t)this_ptr + 0xa4c) = this_ptr[0xc9];
    *(void*)((int64_t)this_ptr + 0xa54) = this_ptr[0xca];
    *(void*)((int64_t)this_ptr + 0xa5c) = this_ptr[0xcb];
    *(void*)((int64_t)this_ptr + 0xa64) = this_ptr[0xcc];
    *(void*)((int64_t)this_ptr + 0xa6c) = this_ptr[0xcd];
    *(void*)((int64_t)this_ptr + 0xa74) = this_ptr[0xce];
    *(void*)((int64_t)this_ptr + 0xa7c) = this_ptr[0xcf];
    *(void*)((int64_t)this_ptr + 0xa84) = this_ptr[0xd0];
    *(void*)((int64_t)this_ptr + 0xa8c) = this_ptr[0xd1];
    *(void*)((int64_t)this_ptr + 0xa94) = this_ptr[0xd2];
    *(void*)((int64_t)this_ptr + 0xa9c) = this_ptr[0xd3];
    *(void*)((int64_t)this_ptr + 0xaa4) = this_ptr[0xd4];
    *(void*)((int64_t)this_ptr + 0xaac) = this_ptr[0xd5];
    *(void*)((int64_t)this_ptr + 0xab4) = this_ptr[0xd6];
    *(void*)((int64_t)this_ptr + 0xabc) = this_ptr[0xd7];
    *(void*)((int64_t)this_ptr + 0xac4) = this_ptr[0xd8];
    *(void*)((int64_t)this_ptr + 0xacc) = this_ptr[0xd9];
    *(void*)((int64_t)this_ptr + 0xad4) = this_ptr[0xda];
    *(void*)((int64_t)this_ptr + 0xadc) = this_ptr[0xdb];
    *(void*)((int64_t)this_ptr + 0xae4) = this_ptr[0xdc];
    *(void*)((int64_t)this_ptr + 0xaec) = this_ptr[0xdd];
    *(void*)((int64_t)this_ptr + 0xaf4) = this_ptr[0xde];
    *(void*)((int64_t)this_ptr + 0xafc) = this_ptr[0xdf];
    *(void*)((int64_t)this_ptr + 0xb04) = this_ptr[0xe0];
    *(void*)((int64_t)this_ptr + 0xb0c) = this_ptr[0xe1];
    *(void*)((int64_t)this_ptr + 0xb14) = this_ptr[0xe2];
    *(void*)((int64_t)this_ptr + 0xb1c) = this_ptr[0xe3];
    *(void*)((int64_t)this_ptr + 0xb24) = this_ptr[0xe4];
    *(void*)((int64_t)this_ptr + 0xb2c) = this_ptr[0xe5];
    *(void*)((int64_t)this_ptr + 0xb34) = this_ptr[0xe6];
    *(void*)((int64_t)this_ptr + 0xb3c) = this_ptr[0xe7];
    *(void*)((int64_t)this_ptr + 0xb44) = this_ptr[0xe8];
    *(void*)((int64_t)this_ptr + 0xb4c) = this_ptr[0xe9];
    *(void*)((int64_t)this_ptr + 0xb54) = this_ptr[0xea];
    *(void*)((int64_t)this_ptr + 0xb5c) = this_ptr[0xeb];
    *(void*)((int64_t)this_ptr + 0xb64) = this_ptr[0xec];
    *(void*)((int64_t)this_ptr + 0xb6c) = this_ptr[0xed];
    *(void*)((int64_t)this_ptr + 0xb74) = this_ptr[0xee];
    *(void*)((int64_t)this_ptr + 0xb7c) = this_ptr[0xef];
    *(void*)((int64_t)this_ptr + 0xb84) = this_ptr[0xf0];
    *(void*)((int64_t)this_ptr + 0xb8c) = this_ptr[0xf1];
    *(void*)((int64_t)this_ptr + 0xb94) = this_ptr[0xf2];
    *(void*)((int64_t)this_ptr + 0xb9c) = this_ptr[0xf3];
    *(void*)((int64_t)this_ptr + 0xba4) = this_ptr[0xf4];
    *(void*)((int64_t)this_ptr + 0xbac) = this_ptr[0xf5];
    *(void*)((int64_t)this_ptr + 0xbb4) = this_ptr[0xf6];
    *(void*)((int64_t)this_ptr + 0xbbc) = this_ptr[0xf7];
    *(void*)((int64_t)this_ptr + 0xbc4) = this_ptr[0xf8];
    *(void*)((int64_t)this_ptr + 0xbcc) = this_ptr[0xf9];
    *(void*)((int64_t)this_ptr + 0xbd4) = this_ptr[0xfa];
    *(void*)((int64_t)this_ptr + 0xbdc) = this_ptr[0xfb];
    *(void*)((int64_t)this_ptr + 0xbe4) = this_ptr[0xfc];
    *(void*)((int64_t)this_ptr + 0xbec) = this_ptr[0xfd];
    *(void*)((int64_t)this_ptr + 0xbf4) = this_ptr[0xfe];
    *(void*)((int64_t)this_ptr + 0xbfc) = this_ptr[0xff];
    *(void*)((int64_t)this_ptr + 0xc04) = this_ptr[0x100];
    *(void*)((int64_t)this_ptr + 0xc0c) = this_ptr[0x101];
    *(void*)((int64_t)this_ptr + 0xc14) = this_ptr[0x102];
    *(void*)((int64_t)this_ptr + 0xc1c) = this_ptr[0x103];
    *(void*)((int64_t)this_ptr + 0xc24) = this_ptr[0x104];
    *(void*)((int64_t)this_ptr + 0xc2c) = this_ptr[0x105];
    *(void*)((int64_t)this_ptr + 0xc34) = this_ptr[0x106];
    *(void*)((int64_t)this_ptr + 0xc3c) = this_ptr[0x107];
    *(void*)((int64_t)this_ptr + 0xc44) = this_ptr[0x108];
    *(void*)((int64_t)this_ptr + 0xc4c) = *(void*)(this_ptr + 0x109);
    if (0 < (int)local_68) {
      uVar52 = 0;
      do {
        uVar35 = (uint64_t)*(byte *)(this_ptr[0x18b] + uVar52 * 2);
        uVar43 = *(uint *)((int64_t)this_ptr + uVar35 * 4 + 0x84c);
        *(short *)(this_ptr[0x18b] + uVar52 * 2) = (short)uVar43;
        uVar45 = uVar52 >> 1 & 0x7fffffff;
        bVar18 = *(byte *)(this_ptr[0x18c] + uVar45);
        if ((uVar52 & 1) == 0) {
          bVar18 = bVar18 & 0xf0;
          bVar25 = (byte)(uVar43 >> 0x10);
        }
        else {
          bVar18 = bVar18 & 0xf;
          bVar25 = (byte)(uVar43 >> 0xc) & 0xf0;
        }
        *(byte *)(this_ptr[0x18c] + uVar45) = bVar25 | bVar18;
        piVar34 = (int *)((int64_t)this_ptr + uVar35 * 4 + 0x84c);
        *piVar34 = *piVar34 + 1;
        uVar52 = uVar52 + 1;
      } while ((_local_68 & 0xffffffff) != uVar52);
    }
    iVar26 = *(int *)(this_ptr + 7);
    lVar28 = this_ptr[0x18b];
    lVar44 = this_ptr[0x18c];
    uVar35 = (int64_t)iVar26;
    uVar57 = (*(byte *)(lVar44 + (iVar26 >> 1)) >> ((char)iVar26 * '\x04' & 4U) & 0xf) << 0x10 |
             (uint)*(ushort *)(lVar28 + (int64_t)iVar26 * 2);
    while( true ) {
      uVar52 = (uint64_t)uVar57;
      uVar45 = (uint64_t)(int)uVar57;
      uVar4 = *(ushort *)(lVar28 + uVar45 * 2);
      lVar38 = (int64_t)((int)uVar57 >> 1);
      bVar18 = *(byte *)(lVar44 + lVar38);
      *(short *)(lVar28 + uVar45 * 2) = (short)uVar35;
      if ((uVar45 & 1) == 0) {
        bVar25 = *(byte *)(lVar44 + lVar38) & 0xf0;
        bVar30 = (byte)(uVar35 >> 0x10);
      }
      else {
        bVar25 = *(byte *)(lVar44 + lVar38) & 0xf;
        bVar30 = (byte)((uint)uVar35 >> 0xc) & 0xf0;
      }
      local_70 = (uint8_t  [4])
                 ((bVar18 >> ((char)uVar57 * '\x04' & 4U) & 0xf) << 0x10 | (uint)uVar4);
      *(byte *)(lVar44 + lVar38) = bVar30 | bVar25;
      if (uVar57 == *(uint *)(this_ptr + 7)) break;
      lVar28 = this_ptr[0x18b];
      lVar44 = this_ptr[0x18c];
      uVar35 = uVar52;
      uVar57 = (uint)local_70;
    }
    *(uint *)((int64_t)this_ptr + 0x3c) = uVar57;
    *(void*)((int64_t)this_ptr + 0x444) = 0;
    if (*(char *)((int64_t)this_ptr + 0x14) != '\0') {
      this_ptr[3] = 0;
      if ((uint)(*(int *)(this_ptr + 5) * 100000) <= uVar57) {
        return 1;
      }
      uVar22 = FUN_00e9ec70();
      *(uint *)(this_ptr + 8) = uVar22;
      iVar26 = *(int *)(this_ptr + 3);
      uVar43 = *(uint *)((int64_t)this_ptr + 0x3c);
      *(uint *)((int64_t)this_ptr + 0x3c) =
           (*(byte *)(this_ptr[0x18c] + (uint64_t)(uVar43 >> 1)) >> ((char)uVar43 * '\x04' & 4U) &
           0xf) << 0x10 | (uint)*(ushort *)(this_ptr[0x18b] + (uint64_t)uVar43 * 2);
      *(int *)((int64_t)this_ptr + 0x444) = *(int *)((int64_t)this_ptr + 0x444) + 1;
      if (iVar26 == 0) {
        iVar26 = (&g_0278a020)[*(int *)((int64_t)this_ptr + 0x1c)];
        iVar39 = *(int *)((int64_t)this_ptr + 0x1c) + 1;
        iVar53 = 0;
        if (iVar39 != 0x200) {
          iVar53 = iVar39;
        }
        *(int *)((int64_t)this_ptr + 0x1c) = iVar53;
      }
      *(int *)(this_ptr + 3) = iVar26 + -1;
      *(uint *)(this_ptr + 8) = uVar22 ^ iVar26 + -1 == 1;
      uVar24 = 0;
      local_80 = (uint8_t  [8])((uint64_t)local_98 & 0xffffffff);
      uVar19 = (uint)local_38;
      uVar43 = local_48._4_4_;
      iVar53 = local_6c;
      goto LAB_00ea7aff;
    }
    if ((uint)(*(int *)(this_ptr + 5) * 100000) <= uVar57) {
      return 1;
    }
    uVar23 = FUN_00e9ec70();
    *(void*)(this_ptr + 8) = uVar23;
    uVar43 = *(uint *)((int64_t)this_ptr + 0x3c);
    *(uint *)((int64_t)this_ptr + 0x3c) =
         (*(byte *)(this_ptr[0x18c] + (uint64_t)(uVar43 >> 1)) >> ((char)uVar43 * '\x04' & 4U) &
         0xf) << 0x10 | (uint)*(ushort *)(this_ptr[0x18b] + (uint64_t)uVar43 * 2);
    *(int *)((int64_t)this_ptr + 0x444) = *(int *)((int64_t)this_ptr + 0x444) + 1;
    uVar24 = 0;
  }
LAB_00ea8160:
  local_80 = (uint8_t  [8])((uint64_t)local_98 & 0xffffffff);
  uVar19 = (uint)local_38;
  uVar43 = local_48._4_4_;
  uVar57 = (uint)uVar52;
  iVar53 = local_6c;
  goto LAB_00ea7aff;
LAB_00ea7adf:
  auVar51 = (uint8_t  [8])((int64_t)auVar51 + 1);
  auVar46 = (uint8_t  [8])(uint64_t)local_98;
  goto LAB_00ea7afb;
LAB_00ea7ae5:
  auVar51 = (uint8_t  [8])((int64_t)auVar51 + 2);
  auVar46 = (uint8_t  [8])(uint64_t)local_98;
  goto LAB_00ea7afb;
LAB_00ea7aeb:
  auVar51 = (uint8_t  [8])((int64_t)auVar51 + 3);
  auVar46 = (uint8_t  [8])(uint64_t)local_98;
  goto LAB_00ea7afb;
LAB_00ea6ffe:
  uVar57 = SUB84(auVar51,0);
  uVar41 = SUB84(local_98,0);
  auVar50 = local_98;
  _local_60 = uVar22;
  if (uVar41 != local_80._0_4_) {
    if (uVar41 < 2) {
      iVar33 = -1;
      iVar32 = 1;
      do {
        uVar19 = (uint)local_38;
        uVar57 = SUB84(auVar51,0);
        uVar24 = 0xfffffffc;
        _local_60 = uVar22;
        if (0x1fffff < iVar32) goto LAB_00ea7aff;
        if (SUB84(local_98,0) == 1) {
          iVar26 = iVar32 * 2;
LAB_00ea854b:
          iVar33 = iVar33 + iVar26;
        }
        else {
          iVar26 = iVar32;
          if (SUB84(local_98,0) == 0) goto LAB_00ea854b;
        }
        if (iVar53 == 0) {
          iVar53 = (int)uStack_40;
          uStack_40 = (int64_t)iVar53 + 1;
          iVar26 = iVar32 * 2;
          if ((int)uVar22 <= (int)uStack_40) goto LAB_00ea86fe;
          local_90 = (uint8_t  [8])
                     (uint64_t)*(byte *)((int64_t)this_ptr + (int64_t)(&g_00001ecd + iVar53));
          local_a4 = *(uint *)((int64_t)this_ptr + (int64_t)local_90 * 4 + 0xfa0c);
          local_c8 = &UNK_0000b17c + (int64_t)(this_ptr + (int64_t)local_90 * 0x81);
          local_78 = (uint8_t  [8])((int64_t)this_ptr + (int64_t)local_90 * 0x408 + 0xe1dc);
          local_d8 = (int64_t)this_ptr + (int64_t)local_90 * 0x408 + 0xc9ac;
          iVar53 = 0x32;
        }
        iVar32 = iVar32 * 2;
        iVar53 = iVar53 + -1;
        local_48 = (uint64_t)local_a4;
        auVar50 = local_98;
switchD_00ea4a00_caseD_26:
        local_98 = auVar50;
        *(void*)(this_ptr + 1) = 0x26;
        iVar26 = *(int *)((int64_t)this_ptr + 0x24);
        auStack_5f._3_4_ = SUB84(pFVar49,0);
        if (iVar26 < (int)(uint)local_48) {
          puVar54 = (void*)*this_ptr;
          iVar39 = *(int *)(puVar54 + 1);
          do {
            iVar39 = iVar39 + -1;
            if (iVar39 == -1) {
              uVar24 = 0;
              uVar19 = (uint)local_38;
              _local_60 = uVar22;
              uVar57 = SUB84(auVar51,0);
              goto LAB_00ea7aff;
            }
            pbVar5 = (byte *)*puVar54;
            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
            *(uint *)(this_ptr + 4) = uVar19;
            iVar26 = iVar26 + 8;
            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
            *puVar54 = pbVar5 + 1;
            *(int *)(puVar54 + 1) = iVar39;
            piVar34 = (int *)((int64_t)puVar54 + 0xc);
            *piVar34 = *piVar34 + 1;
            if (*piVar34 == 0) {
              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
            }
          } while (iVar26 < (int)(uint)local_48);
        }
        else {
          uVar19 = *(uint *)(this_ptr + 4);
        }
        iVar26 = iVar26 - (uint)local_48;
        uVar19 = ~(-1 << ((byte)local_48 & 0x1f)) & uVar19 >> ((byte)iVar26 & 0x1f);
        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
        while( true ) {
          local_38 = (uint64_t)uVar19;
          uVar57 = SUB84(auVar51,0);
          uVar24 = 0xfffffffc;
          if (0x14 < (int)(uint)local_48) {
            local_48 = (uint64_t)(uint)local_48;
            _local_60 = uVar22;
            goto LAB_00ea7aff;
          }
          lVar28 = (int64_t)(int)(uint)local_48;
          if ((int)uVar19 <= *(int *)(local_c8 + lVar28 * 4)) break;
          local_48 = (uint64_t)((uint)local_48 + 1);
          *(void*)(this_ptr + 1) = 0x27;
          auVar50 = local_98;
          if (iVar26 < 1) {
LAB_00ea4f38:
            puVar54 = (void*)*this_ptr;
            iVar39 = *(int *)(puVar54 + 1);
            iVar31 = iVar26;
            do {
              iVar39 = iVar39 + -1;
              if (iVar39 == -1) goto LAB_00ea68fd;
              pbVar5 = (byte *)*puVar54;
              uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
              *(uint *)(this_ptr + 4) = uVar19;
              iVar26 = iVar31 + 8;
              *(int *)((int64_t)this_ptr + 0x24) = iVar26;
              *puVar54 = pbVar5 + 1;
              *(int *)(puVar54 + 1) = iVar39;
              piVar34 = (int *)((int64_t)puVar54 + 0xc);
              *piVar34 = *piVar34 + 1;
              if (*piVar34 == 0) {
                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
              }
              bVar55 = iVar31 < -7;
              local_98 = auVar50;
              iVar31 = iVar26;
            } while (bVar55);
          }
          else {
LAB_00ea87df:
            uVar19 = *(uint *)(this_ptr + 4);
            local_98 = auVar50;
          }
          iVar26 = iVar26 + -1;
          local_cc = uVar19 >> ((byte)iVar26 & 0x1f) & 1;
          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
          uVar19 = local_cc + (uint)local_38 * 2;
        }
        local_48 = (uint64_t)(uint)local_48;
        uVar19 = uVar19 - *(int *)(local_d8 + lVar28 * 4);
        if (0x101 < uVar19) goto LAB_00ea68ff;
        uVar19 = *(uint *)((int64_t)local_78 + (uint64_t)uVar19 * 4);
        local_98 = (uint8_t  [8])(uint64_t)uVar19;
      } while (uVar19 < 2);
      iVar26 = iVar33 + 1;
      bVar18 = *(byte *)((int64_t)this_ptr +
                        (uint64_t)
                        *(byte *)((int64_t)this_ptr +
                                 (int64_t)*(int *)((int64_t)this_ptr + 0x1e8c) + 0xe8c) + 0xd8c);
      piVar34 = (int *)((int64_t)this_ptr + (uint64_t)bVar18 * 4 + 0x44);
      *piVar34 = *piVar34 + iVar26;
      if (*(char *)((int64_t)this_ptr + 0x2c) == '\0') goto LAB_00ea88b5;
      bVar55 = -1 < iVar33;
      iVar33 = iVar26;
      if (bVar55) {
        lVar28 = (int64_t)(int)local_68;
        if ((int)local_68 <= local_b4) {
          local_68 = (uint8_t  [4])local_b4;
        }
        do {
          if ((int)local_68 == lVar28) goto LAB_00ea890a;
          *(ushort *)(this_ptr[0x18b] + lVar28 * 2) = (ushort)bVar18;
          lVar28 = lVar28 + 1;
          iVar26 = iVar33 + -1;
          bVar55 = 1 < iVar33;
          iVar33 = iVar26;
        } while (bVar55);
        uVar23 = (uint32_t)lVar28;
        goto LAB_00ea88f5;
      }
    }
    else {
      uVar24 = 0xfffffffc;
      uVar19 = (uint)local_38;
      if (local_b4 <= (int)local_68) goto LAB_00ea7aff;
      uVar41 = uVar41 - 1;
      if (uVar41 < 0x10) {
        iVar26 = *(int *)((int64_t)this_ptr + 0x1e8c);
        bVar18 = *(byte *)((int64_t)this_ptr + (uint64_t)(iVar26 + uVar41) + 0xe8c);
        if (uVar41 < 4) {
LAB_00ea7134:
          uVar19 = uVar41;
          if ((uVar41 & 1) != 0) {
            *(void*)((int64_t)this_ptr + (uint64_t)(iVar26 + uVar41) + 0xe8c) =
                 *(void*)((int64_t)this_ptr + (uint64_t)((iVar26 + uVar41) - 1) + 0xe8c);
            uVar19 = uVar41 - 1;
          }
          if (uVar41 != 1) {
            uVar52 = (uint64_t)(uVar19 + iVar26);
            do {
              uVar35 = (uint64_t)((int)uVar52 - 1);
              *(void*)((int64_t)this_ptr + uVar52 + 0xe8c) =
                   *(void*)((int64_t)this_ptr + uVar35 + 0xe8c);
              uVar52 = (uint64_t)((int)uVar52 - 2);
              *(void*)((int64_t)this_ptr + uVar35 + 0xe8c) =
                   *(void*)((int64_t)this_ptr + uVar52 + 0xe8c);
              uVar19 = uVar19 - 2;
            } while (uVar19 != 0);
          }
        }
        else {
          local_48 = CONCAT44(uVar43,(uint)local_48);
          uVar52 = (uint64_t)local_98;
          do {
            iVar39 = (int)uVar52;
            lVar44 = (int64_t)(iVar26 + -1 + iVar39 + -1);
            *(void*)((int64_t)this_ptr + (int64_t)(iVar26 + -1 + iVar39) + 0xe8c) =
                 *(void*)((int64_t)this_ptr + lVar44 + 0xe8c);
            lVar28 = (int64_t)(iVar26 + -3 + iVar39);
            *(void*)((int64_t)this_ptr + lVar44 + 0xe8c) =
                 *(void*)((int64_t)this_ptr + lVar28 + 0xe8c);
            lVar44 = (int64_t)(iVar26 + -4 + iVar39);
            *(void*)((int64_t)this_ptr + lVar28 + 0xe8c) =
                 *(void*)((int64_t)this_ptr + lVar44 + 0xe8c);
            *(void*)((int64_t)this_ptr + lVar44 + 0xe8c) =
                 *(void*)((int64_t)this_ptr + (int64_t)(iVar26 + -5 + iVar39) + 0xe8c);
            uVar52 = (uint64_t)(iVar39 - 4U);
          } while (3 < iVar39 - 5U);
          if (iVar39 - 4U != 1) {
            uVar41 = iVar39 - 5;
            goto LAB_00ea7134;
          }
        }
        *(byte *)((int64_t)this_ptr + (int64_t)iVar26 + 0xe8c) = bVar18;
        auStack_5f._3_4_ = (uint)pFVar49;
      }
      else {
        uVar52 = (uint64_t)(uVar41 >> 4);
        iVar26 = *(int *)(&g_00001e8c + (int64_t)this_ptr + uVar52 * 4);
        lVar28 = (int64_t)(int)(iVar26 + (uVar41 & 0xf));
        bVar18 = *(byte *)((int64_t)this_ptr + lVar28 + 0xe8c);
        if ((uVar41 & 0xf) != 0) {
          do {
            *(void*)((int64_t)this_ptr + lVar28 + 0xe8c) =
                 *(void*)((int64_t)this_ptr + lVar28 + 0xe8b);
            lVar28 = lVar28 + -1;
            iVar26 = *(int *)(&g_00001e8c + (int64_t)this_ptr + uVar52 * 4);
          } while (iVar26 < lVar28);
        }
        *(int *)(&g_00001e8c + (int64_t)this_ptr + uVar52 * 4) = iVar26 + 1;
        do {
          uVar35 = uVar52 - 1;
          iVar26 = *(int *)((int64_t)this_ptr + (int64_t)(&UNK_00001e90 + uVar35 * 4));
          *(int *)((int64_t)this_ptr + (int64_t)(&UNK_00001e90 + uVar35 * 4)) = iVar26 + -1;
          *(void*)((int64_t)this_ptr + (int64_t)iVar26 + 0xe8b) =
               *(void*)
                ((int64_t)*(int *)(&g_00001e8c + (int64_t)this_ptr + (uVar35 & 0xffffffff) * 4)
                 + 0xe9b + (int64_t)this_ptr);
          bVar55 = 1 < (int64_t)uVar52;
          uVar52 = uVar35;
        } while (bVar55);
        iVar26 = *(int *)((int64_t)this_ptr + 0x1e8c);
        *(int *)((int64_t)this_ptr + 0x1e8c) = iVar26 + -1;
        *(byte *)((int64_t)this_ptr + (int64_t)iVar26 + 0xe8b) = bVar18;
        if (*(int *)((int64_t)this_ptr + 0x1e8c) == 0) {
          iVar26 = 0xff0;
          lVar28 = 0;
          do {
            (&g_00001e8b + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe9b + (int64_t)this_ptr);
            (&g_00001e8a + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe9a + (int64_t)this_ptr);
            (&g_00001e89 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe99 + (int64_t)this_ptr);
            *(void*)((int64_t)this_ptr + (int64_t)(&g_00001e88 + lVar28 * 4)) =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe98 + (int64_t)this_ptr);
            (&g_00001e87 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe97 + (int64_t)this_ptr);
            (&g_00001e86 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe96 + (int64_t)this_ptr);
            (&g_00001e85 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe95 + (int64_t)this_ptr);
            (&g_00001e84 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe94 + (int64_t)this_ptr);
            (&g_00001e83 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe93 + (int64_t)this_ptr);
            (&g_00001e82 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe92 + (int64_t)this_ptr);
            (&g_00001e81 + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe91 + (int64_t)this_ptr);
            *(void*)((int64_t)this_ptr + (int64_t)(&g_00001e80 + lVar28 * 4)) =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe90 + (int64_t)this_ptr);
            (&g_00001e7f + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe8f + (int64_t)this_ptr);
            (&g_00001e7e + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe8e + (int64_t)this_ptr);
            (&g_00001e7d + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                   0xe8d + (int64_t)this_ptr);
            (&g_00001e7c + (int64_t)this_ptr)[lVar28 * 4] =
                 *(void*)
                  ((int64_t)this_ptr +
                  (int64_t)*(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) +
                  0xe8c);
            *(int *)((int64_t)this_ptr + (int64_t)(&g_00001ec8 + lVar28)) = iVar26;
            lVar28 = lVar28 + -4;
            iVar26 = iVar26 + -0x10;
          } while (lVar28 != -0x40);
        }
      }
      piVar34 = (int *)((int64_t)this_ptr +
                       (uint64_t)*(byte *)((int64_t)this_ptr + (uint64_t)bVar18 + 0xd8c) * 4 +
                       0x44);
      *piVar34 = *piVar34 + 1;
      bVar18 = *(byte *)((int64_t)this_ptr + (uint64_t)bVar18 + 0xd8c);
      if (*(char *)((int64_t)this_ptr + 0x2c) == '\0') {
        *(uint *)(this_ptr[0x18a] + (int64_t)(int)local_68 * 4) = (uint)bVar18;
      }
      else {
        *(ushort *)(this_ptr[0x18b] + (int64_t)(int)local_68 * 2) = (ushort)bVar18;
      }
      _local_68 = CONCAT44(auStack_64,(int)local_68 + 1);
      if (iVar53 == 0) {
        iVar53 = (int)uStack_40;
        uStack_40 = (int64_t)iVar53 + 1;
        iVar26 = iVar32;
        if ((int)uVar22 <= (int)uStack_40) {
LAB_00ea86fe:
          iVar32 = iVar26;
          uVar19 = (uint)local_38;
          uVar24 = 0xfffffffc;
          _local_60 = uVar22;
          iVar53 = 0;
          goto LAB_00ea7aff;
        }
        local_90 = (uint8_t  [8])
                   (uint64_t)*(byte *)((int64_t)this_ptr + (int64_t)(&g_00001ecd + iVar53));
        local_a4 = *(uint *)((int64_t)this_ptr + (int64_t)local_90 * 4 + 0xfa0c);
        local_c8 = &UNK_0000b17c + (int64_t)(this_ptr + (int64_t)local_90 * 0x81);
        local_78 = (uint8_t  [8])((int64_t)this_ptr + (int64_t)local_90 * 0x408 + 0xe1dc);
        local_d8 = (int64_t)this_ptr + (int64_t)local_90 * 0x408 + 0xc9ac;
        iVar53 = 0x32;
      }
      iVar53 = iVar53 + -1;
      local_48 = (uint64_t)local_a4;
switchD_00ea4a00_caseD_28:
      *(void*)(this_ptr + 1) = 0x28;
      iVar26 = *(int *)((int64_t)this_ptr + 0x24);
      if (iVar26 < (int)(uint)local_48) {
        puVar54 = (void*)*this_ptr;
        iVar39 = *(int *)(puVar54 + 1);
        do {
          iVar39 = iVar39 + -1;
          if (iVar39 == -1) goto LAB_00ea68fd;
          pbVar5 = (byte *)*puVar54;
          uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
          *(uint *)(this_ptr + 4) = uVar19;
          iVar26 = iVar26 + 8;
          *(int *)((int64_t)this_ptr + 0x24) = iVar26;
          *puVar54 = pbVar5 + 1;
          *(int *)(puVar54 + 1) = iVar39;
          piVar34 = (int *)((int64_t)puVar54 + 0xc);
          *piVar34 = *piVar34 + 1;
          if (*piVar34 == 0) {
            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
          }
        } while (iVar26 < (int)(uint)local_48);
      }
      else {
        uVar19 = *(uint *)(this_ptr + 4);
      }
      iVar26 = iVar26 - (uint)local_48;
      uVar19 = ~(-1 << ((byte)local_48 & 0x1f)) & uVar19 >> ((byte)iVar26 & 0x1f);
      *(int *)((int64_t)this_ptr + 0x24) = iVar26;
      local_98 = auVar50;
      while( true ) {
        local_38 = (uint64_t)uVar19;
        uVar57 = SUB84(auVar51,0);
        uVar24 = 0xfffffffc;
        if (0x14 < (int)(uint)local_48) {
          local_48 = (uint64_t)(uint)local_48;
          _local_60 = uVar22;
          goto LAB_00ea7aff;
        }
        lVar28 = (int64_t)(int)(uint)local_48;
        if ((int)uVar19 <= *(int *)(local_c8 + lVar28 * 4)) break;
        local_48 = (uint64_t)((uint)local_48 + 1);
        *(void*)(this_ptr + 1) = 0x29;
        if (iVar26 < 1) {
LAB_00ea4fac:
          puVar54 = (void*)*this_ptr;
          iVar39 = *(int *)(puVar54 + 1);
          iVar31 = iVar26;
          do {
            iVar39 = iVar39 + -1;
            auVar50 = local_98;
            if (iVar39 == -1) goto LAB_00ea68fd;
            pbVar5 = (byte *)*puVar54;
            uVar19 = (uint)*pbVar5 | *(int *)(this_ptr + 4) << 8;
            *(uint *)(this_ptr + 4) = uVar19;
            iVar26 = iVar31 + 8;
            *(int *)((int64_t)this_ptr + 0x24) = iVar26;
            *puVar54 = pbVar5 + 1;
            *(int *)(puVar54 + 1) = iVar39;
            piVar34 = (int *)((int64_t)puVar54 + 0xc);
            *piVar34 = *piVar34 + 1;
            if (*piVar34 == 0) {
              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
            }
            bVar55 = iVar31 < -7;
            iVar31 = iVar26;
          } while (bVar55);
        }
        else {
LAB_00ea8740:
          uVar19 = *(uint *)(this_ptr + 4);
        }
        iVar26 = iVar26 + -1;
        local_cc = uVar19 >> ((byte)iVar26 & 0x1f) & 1;
        *(int *)((int64_t)this_ptr + 0x24) = iVar26;
        uVar19 = local_cc + (uint)local_38 * 2;
      }
      local_48 = (uint64_t)(uint)local_48;
      uVar19 = uVar19 - *(int *)(local_d8 + lVar28 * 4);
      if (0x101 < uVar19) goto LAB_00ea68ff;
      local_98 = (uint8_t  [8])(uint64_t)*(uint *)((int64_t)local_78 + (uint64_t)uVar19 * 4);
    }
    goto LAB_00ea6ffe;
  }
  uVar24 = 0xfffffffc;
  auVar46 = (uint8_t  [8])(uint64_t)local_98;
  if ((-1 < *(int *)(this_ptr + 7)) &&
     (auVar46 = (uint8_t  [8])(uint64_t)local_98, *(int *)(this_ptr + 7) < (int)local_68)) {
    auVar51 = (uint8_t  [8])0x0;
    do {
      iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x44);
      auVar46 = (uint8_t  [8])(uint64_t)local_98;
      if ((iVar26 < 0) || (auVar46 = (uint8_t  [8])(uint64_t)local_98, (int)local_68 < iVar26))
      goto LAB_00ea7afb;
      iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x48);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7adf;
      iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x4c);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7ae5;
      iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x50);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7aeb;
      auVar51 = (uint8_t  [8])((int64_t)auVar51 + 4);
    } while (auVar51 != (uint8_t  [8])0x100);
    local_80 = (uint8_t  [8])(this_ptr + 0x89);
    *(void*)(this_ptr + 0x89) = 0;
    *(void*)((int64_t)this_ptr + 0x44c) = *(void*)((int64_t)this_ptr + 0x44);
    *(void*)((int64_t)this_ptr + 0x454) = *(void*)((int64_t)this_ptr + 0x4c);
    *(void*)((int64_t)this_ptr + 0x45c) = *(void*)((int64_t)this_ptr + 0x54);
    *(void*)((int64_t)this_ptr + 0x464) = *(void*)((int64_t)this_ptr + 0x5c);
    *(void*)((int64_t)this_ptr + 0x46c) = *(void*)((int64_t)this_ptr + 100);
    *(void*)((int64_t)this_ptr + 0x474) = *(void*)((int64_t)this_ptr + 0x6c);
    *(void*)((int64_t)this_ptr + 0x47c) = *(void*)((int64_t)this_ptr + 0x74);
    *(void*)((int64_t)this_ptr + 0x484) = *(void*)((int64_t)this_ptr + 0x7c);
    *(void*)((int64_t)this_ptr + 0x48c) = *(void*)((int64_t)this_ptr + 0x84);
    *(void*)((int64_t)this_ptr + 0x494) = *(void*)((int64_t)this_ptr + 0x8c);
    *(void*)((int64_t)this_ptr + 0x49c) = *(void*)((int64_t)this_ptr + 0x94);
    *(void*)((int64_t)this_ptr + 0x4a4) = *(void*)((int64_t)this_ptr + 0x9c);
    *(void*)((int64_t)this_ptr + 0x4ac) = *(void*)((int64_t)this_ptr + 0xa4);
    *(void*)((int64_t)this_ptr + 0x4b4) = *(void*)((int64_t)this_ptr + 0xac);
    *(void*)((int64_t)this_ptr + 0x4bc) = *(void*)((int64_t)this_ptr + 0xb4);
    *(void*)((int64_t)this_ptr + 0x4c4) = *(void*)((int64_t)this_ptr + 0xbc);
    *(void*)((int64_t)this_ptr + 0x4cc) = *(void*)((int64_t)this_ptr + 0xc4);
    *(void*)((int64_t)this_ptr + 0x4d4) = *(void*)((int64_t)this_ptr + 0xcc);
    *(void*)((int64_t)this_ptr + 0x4dc) = *(void*)((int64_t)this_ptr + 0xd4);
    *(void*)((int64_t)this_ptr + 0x4e4) = *(void*)((int64_t)this_ptr + 0xdc);
    *(void*)((int64_t)this_ptr + 0x4ec) = *(void*)((int64_t)this_ptr + 0xe4);
    *(void*)((int64_t)this_ptr + 0x4f4) = *(void*)((int64_t)this_ptr + 0xec);
    *(void*)((int64_t)this_ptr + 0x4fc) = *(void*)((int64_t)this_ptr + 0xf4);
    *(void*)((int64_t)this_ptr + 0x504) = *(void*)((int64_t)this_ptr + 0xfc);
    *(void*)((int64_t)this_ptr + 0x50c) = *(void*)((int64_t)this_ptr + 0x104);
    *(void*)((int64_t)this_ptr + 0x514) = *(void*)((int64_t)this_ptr + 0x10c);
    *(void*)((int64_t)this_ptr + 0x51c) = *(void*)((int64_t)this_ptr + 0x114);
    *(void*)((int64_t)this_ptr + 0x524) = *(void*)((int64_t)this_ptr + 0x11c);
    *(void*)((int64_t)this_ptr + 0x52c) = *(void*)((int64_t)this_ptr + 0x124);
    *(void*)((int64_t)this_ptr + 0x534) = *(void*)((int64_t)this_ptr + 300);
    *(void*)((int64_t)this_ptr + 0x53c) = *(void*)((int64_t)this_ptr + 0x134);
    *(void*)((int64_t)this_ptr + 0x544) = *(void*)((int64_t)this_ptr + 0x13c);
    *(void*)((int64_t)this_ptr + 0x54c) = *(void*)((int64_t)this_ptr + 0x144);
    *(void*)((int64_t)this_ptr + 0x554) = *(void*)((int64_t)this_ptr + 0x14c);
    *(void*)((int64_t)this_ptr + 0x55c) = *(void*)((int64_t)this_ptr + 0x154);
    *(void*)((int64_t)this_ptr + 0x564) = *(void*)((int64_t)this_ptr + 0x15c);
    *(void*)((int64_t)this_ptr + 0x56c) = *(void*)((int64_t)this_ptr + 0x164);
    *(void*)((int64_t)this_ptr + 0x574) = *(void*)((int64_t)this_ptr + 0x16c);
    *(void*)((int64_t)this_ptr + 0x57c) = *(void*)((int64_t)this_ptr + 0x174);
    *(void*)((int64_t)this_ptr + 0x584) = *(void*)((int64_t)this_ptr + 0x17c);
    *(void*)((int64_t)this_ptr + 0x58c) = *(void*)((int64_t)this_ptr + 0x184);
    *(void*)((int64_t)this_ptr + 0x594) = *(void*)((int64_t)this_ptr + 0x18c);
    *(void*)((int64_t)this_ptr + 0x59c) = *(void*)((int64_t)this_ptr + 0x194);
    *(void*)((int64_t)this_ptr + 0x5a4) = *(void*)((int64_t)this_ptr + 0x19c);
    *(void*)((int64_t)this_ptr + 0x5ac) = *(void*)((int64_t)this_ptr + 0x1a4);
    *(void*)((int64_t)this_ptr + 0x5b4) = *(void*)((int64_t)this_ptr + 0x1ac);
    *(void*)((int64_t)this_ptr + 0x5bc) = *(void*)((int64_t)this_ptr + 0x1b4);
    *(void*)((int64_t)this_ptr + 0x5c4) = *(void*)((int64_t)this_ptr + 0x1bc);
    *(void*)((int64_t)this_ptr + 0x5cc) = *(void*)((int64_t)this_ptr + 0x1c4);
    *(void*)((int64_t)this_ptr + 0x5d4) = *(void*)((int64_t)this_ptr + 0x1cc);
    *(void*)((int64_t)this_ptr + 0x5dc) = *(void*)((int64_t)this_ptr + 0x1d4);
    *(void*)((int64_t)this_ptr + 0x5e4) = *(void*)((int64_t)this_ptr + 0x1dc);
    *(void*)((int64_t)this_ptr + 0x5ec) = *(void*)((int64_t)this_ptr + 0x1e4);
    *(void*)((int64_t)this_ptr + 0x5f4) = *(void*)((int64_t)this_ptr + 0x1ec);
    *(void*)((int64_t)this_ptr + 0x5fc) = *(void*)((int64_t)this_ptr + 500);
    *(void*)((int64_t)this_ptr + 0x604) = *(void*)((int64_t)this_ptr + 0x1fc);
    *(void*)((int64_t)this_ptr + 0x60c) = *(void*)((int64_t)this_ptr + 0x204);
    *(void*)((int64_t)this_ptr + 0x614) = *(void*)((int64_t)this_ptr + 0x20c);
    *(void*)((int64_t)this_ptr + 0x61c) = *(void*)((int64_t)this_ptr + 0x214);
    *(void*)((int64_t)this_ptr + 0x624) = *(void*)((int64_t)this_ptr + 0x21c);
    *(void*)((int64_t)this_ptr + 0x62c) = *(void*)((int64_t)this_ptr + 0x224);
    *(void*)((int64_t)this_ptr + 0x634) = *(void*)((int64_t)this_ptr + 0x22c);
    *(void*)((int64_t)this_ptr + 0x63c) = *(void*)((int64_t)this_ptr + 0x234);
    *(void*)((int64_t)this_ptr + 0x644) = *(void*)((int64_t)this_ptr + 0x23c);
    *(void*)((int64_t)this_ptr + 0x64c) = *(void*)((int64_t)this_ptr + 0x244);
    *(void*)((int64_t)this_ptr + 0x654) = *(void*)((int64_t)this_ptr + 0x24c);
    *(void*)((int64_t)this_ptr + 0x65c) = *(void*)((int64_t)this_ptr + 0x254);
    *(void*)((int64_t)this_ptr + 0x664) = *(void*)((int64_t)this_ptr + 0x25c);
    *(void*)((int64_t)this_ptr + 0x66c) = *(void*)((int64_t)this_ptr + 0x264);
    *(void*)((int64_t)this_ptr + 0x674) = *(void*)((int64_t)this_ptr + 0x26c);
    *(void*)((int64_t)this_ptr + 0x67c) = *(void*)((int64_t)this_ptr + 0x274);
    *(void*)((int64_t)this_ptr + 0x684) = *(void*)((int64_t)this_ptr + 0x27c);
    *(void*)((int64_t)this_ptr + 0x68c) = *(void*)((int64_t)this_ptr + 0x284);
    *(void*)((int64_t)this_ptr + 0x694) = *(void*)((int64_t)this_ptr + 0x28c);
    *(void*)((int64_t)this_ptr + 0x69c) = *(void*)((int64_t)this_ptr + 0x294);
    *(void*)((int64_t)this_ptr + 0x6a4) = *(void*)((int64_t)this_ptr + 0x29c);
    *(void*)((int64_t)this_ptr + 0x6ac) = *(void*)((int64_t)this_ptr + 0x2a4);
    *(void*)((int64_t)this_ptr + 0x6b4) = *(void*)((int64_t)this_ptr + 0x2ac);
    *(void*)((int64_t)this_ptr + 0x6bc) = *(void*)((int64_t)this_ptr + 0x2b4);
    *(void*)((int64_t)this_ptr + 0x6c4) = *(void*)((int64_t)this_ptr + 700);
    *(void*)((int64_t)this_ptr + 0x6cc) = *(void*)((int64_t)this_ptr + 0x2c4);
    *(void*)((int64_t)this_ptr + 0x6d4) = *(void*)((int64_t)this_ptr + 0x2cc);
    *(void*)((int64_t)this_ptr + 0x6dc) = *(void*)((int64_t)this_ptr + 0x2d4);
    *(void*)((int64_t)this_ptr + 0x6e4) = *(void*)((int64_t)this_ptr + 0x2dc);
    *(void*)((int64_t)this_ptr + 0x6ec) = *(void*)((int64_t)this_ptr + 0x2e4);
    *(void*)((int64_t)this_ptr + 0x6f4) = *(void*)((int64_t)this_ptr + 0x2ec);
    *(void*)((int64_t)this_ptr + 0x6fc) = *(void*)((int64_t)this_ptr + 0x2f4);
    *(void*)((int64_t)this_ptr + 0x704) = *(void*)((int64_t)this_ptr + 0x2fc);
    *(void*)((int64_t)this_ptr + 0x70c) = *(void*)((int64_t)this_ptr + 0x304);
    *(void*)((int64_t)this_ptr + 0x714) = *(void*)((int64_t)this_ptr + 0x30c);
    *(void*)((int64_t)this_ptr + 0x71c) = *(void*)((int64_t)this_ptr + 0x314);
    *(void*)((int64_t)this_ptr + 0x724) = *(void*)((int64_t)this_ptr + 0x31c);
    *(void*)((int64_t)this_ptr + 0x72c) = *(void*)((int64_t)this_ptr + 0x324);
    *(void*)((int64_t)this_ptr + 0x734) = *(void*)((int64_t)this_ptr + 0x32c);
    *(void*)((int64_t)this_ptr + 0x73c) = *(void*)((int64_t)this_ptr + 0x334);
    *(void*)((int64_t)this_ptr + 0x744) = *(void*)((int64_t)this_ptr + 0x33c);
    *(void*)((int64_t)this_ptr + 0x74c) = *(void*)((int64_t)this_ptr + 0x344);
    *(void*)((int64_t)this_ptr + 0x754) = *(void*)((int64_t)this_ptr + 0x34c);
    *(void*)((int64_t)this_ptr + 0x75c) = *(void*)((int64_t)this_ptr + 0x354);
    *(void*)((int64_t)this_ptr + 0x764) = *(void*)((int64_t)this_ptr + 0x35c);
    *(void*)((int64_t)this_ptr + 0x76c) = *(void*)((int64_t)this_ptr + 0x364);
    *(void*)((int64_t)this_ptr + 0x774) = *(void*)((int64_t)this_ptr + 0x36c);
    *(void*)((int64_t)this_ptr + 0x77c) = *(void*)((int64_t)this_ptr + 0x374);
    *(void*)((int64_t)this_ptr + 0x784) = *(void*)((int64_t)this_ptr + 0x37c);
    *(void*)((int64_t)this_ptr + 0x78c) = *(void*)((int64_t)this_ptr + 900);
    *(void*)((int64_t)this_ptr + 0x794) = *(void*)((int64_t)this_ptr + 0x38c);
    *(void*)((int64_t)this_ptr + 0x79c) = *(void*)((int64_t)this_ptr + 0x394);
    *(void*)((int64_t)this_ptr + 0x7a4) = *(void*)((int64_t)this_ptr + 0x39c);
    *(void*)((int64_t)this_ptr + 0x7ac) = *(void*)((int64_t)this_ptr + 0x3a4);
    *(void*)((int64_t)this_ptr + 0x7b4) = *(void*)((int64_t)this_ptr + 0x3ac);
    *(void*)((int64_t)this_ptr + 0x7bc) = *(void*)((int64_t)this_ptr + 0x3b4);
    *(void*)((int64_t)this_ptr + 0x7c4) = *(void*)((int64_t)this_ptr + 0x3bc);
    *(void*)((int64_t)this_ptr + 0x7cc) = *(void*)((int64_t)this_ptr + 0x3c4);
    *(void*)((int64_t)this_ptr + 0x7d4) = *(void*)((int64_t)this_ptr + 0x3cc);
    *(void*)((int64_t)this_ptr + 0x7dc) = *(void*)((int64_t)this_ptr + 0x3d4);
    *(void*)((int64_t)this_ptr + 0x7e4) = *(void*)((int64_t)this_ptr + 0x3dc);
    *(void*)((int64_t)this_ptr + 0x7ec) = *(void*)((int64_t)this_ptr + 0x3e4);
    *(void*)((int64_t)this_ptr + 0x7f4) = *(void*)((int64_t)this_ptr + 0x3ec);
    *(void*)((int64_t)this_ptr + 0x7fc) = *(void*)((int64_t)this_ptr + 0x3f4);
    *(void*)((int64_t)this_ptr + 0x804) = *(void*)((int64_t)this_ptr + 0x3fc);
    *(void*)((int64_t)this_ptr + 0x80c) = *(void*)((int64_t)this_ptr + 0x404);
    *(void*)((int64_t)this_ptr + 0x814) = *(void*)((int64_t)this_ptr + 0x40c);
    *(void*)((int64_t)this_ptr + 0x81c) = *(void*)((int64_t)this_ptr + 0x414);
    *(void*)((int64_t)this_ptr + 0x824) = *(void*)((int64_t)this_ptr + 0x41c);
    *(void*)((int64_t)this_ptr + 0x82c) = *(void*)((int64_t)this_ptr + 0x424);
    *(void*)((int64_t)this_ptr + 0x834) = *(void*)((int64_t)this_ptr + 0x42c);
    *(void*)((int64_t)this_ptr + 0x83c) = *(void*)((int64_t)this_ptr + 0x434);
    *(void*)((int64_t)this_ptr + 0x844) = *(void*)((int64_t)this_ptr + 0x43c);
    lVar28 = 0;
    iVar26 = 0;
    do {
      iVar26 = iVar26 + *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x44c);
      *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x44c) = iVar26;
      iVar26 = iVar26 + *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x450);
      *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x450) = iVar26;
      iVar26 = iVar26 + *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x454);
      *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x454) = iVar26;
      iVar26 = iVar26 + *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x458);
      *(int *)((int64_t)this_ptr + lVar28 * 4 + 0x458) = iVar26;
      lVar28 = lVar28 + 4;
    } while (lVar28 != 0x100);
    if ((int)local_68 < 0) {
      auVar51 = (uint8_t  [8])0;
      auVar46 = (uint8_t  [8])(uint64_t)local_98;
    }
    else {
      auVar51 = (uint8_t  [8])0x0;
      do {
        if (auVar51 == (uint8_t  [8])0x100) {
          local_48 = CONCAT44(uVar43,(uint)local_48);
          uVar52 = 0;
          iVar26 = 0;
          goto LAB_00ea7c35;
        }
        iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x44c);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7adf;
        iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x450);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7ae5;
        iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x454);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7aeb;
        iVar26 = *(int *)((int64_t)this_ptr + (int64_t)auVar51 * 4 + 0x458);
        auVar51 = (uint8_t  [8])((int64_t)auVar51 + 4);
        auVar46 = (uint8_t  [8])(uint64_t)local_98;
      } while ((-1 < iVar26) &&
              (auVar46 = (uint8_t  [8])(uint64_t)local_98, iVar26 <= (int)local_68));
    }
  }
LAB_00ea7afb:
  local_80 = auVar46;
  local_98 = auVar50;
  _local_60 = uVar22;
  uVar57 = SUB84(auVar51,0);
  uVar19 = (uint)local_38;
LAB_00ea7aff:
  *(uint *)((int64_t)this_ptr + 0xfa24) = uVar57;
  *(uint8_t (*) [4])(this_ptr + 0x1f45) = local_70;
  *(uint *)((int64_t)this_ptr + 0xfa2c) = uVar56;
  *(uint *)(this_ptr + 0x1f46) = uVar43;
  *(uint *)((int64_t)this_ptr + 0xfa34) = uVar40;
  *(uint *)(this_ptr + 0x1f47) = _local_60;
  *(void*)((int64_t)this_ptr + 0xfa3c) = local_80._0_4_;
  *(int *)(this_ptr + 0x1f48) = (int)uStack_40;
  *(int *)((int64_t)this_ptr + 0xfa44) = iVar53;
  *(int *)(this_ptr + 0x1f49) = SUB84(local_98,0);
  *(int *)((int64_t)this_ptr + 0xfa4c) = local_b4;
  *(uint8_t (*) [4])(this_ptr + 0x1f4a) = local_68;
  *(int *)((int64_t)this_ptr + 0xfa54) = iVar33;
  *(int *)(this_ptr + 0x1f4b) = iVar32;
  *(uint *)((int64_t)this_ptr + 0xfa5c) = uVar20;
  *(int *)(this_ptr + 0x1f4c) = (int)pFVar49;
  *(uint *)((int64_t)this_ptr + 0xfa64) = (uint)local_48;
  *(uint *)(this_ptr + 0x1f4d) = uVar19;
  *(uint *)((int64_t)this_ptr + 0xfa6c) = local_cc;
  *(int *)(this_ptr + 0x1f4e) = local_90._0_4_;
  *(uint *)((int64_t)this_ptr + 0xfa74) = local_a4;
  this_ptr[0x1f4f] = local_c8;
  this_ptr[0x1f50] = local_d8;
  this_ptr[0x1f51] = local_78;
  return uVar24;
}

