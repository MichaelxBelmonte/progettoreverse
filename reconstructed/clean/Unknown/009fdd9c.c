// Function: FUN_009fdd9c
// Address: 009fdd9c
// Size: 8428 bytes
// Class: Unknown

uint64_t FUN_009fdd9c(char param_1,string *param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  byte bVar4;
  int iVar5;
  size_t sVar6;
  uint32_t uVar7;
  id *piVar8;
  uint32_t extraout_var;
  uint64_t uVar9;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  uint32_t extraout_var_02;
  uint32_t extraout_var_03;
  uint32_t extraout_var_04;
  uint32_t extraout_var_05;
  uint32_t extraout_var_06;
  uint32_t extraout_var_07;
  uint32_t extraout_var_08;
  uint32_t extraout_var_09;
  uint32_t extraout_var_10;
  uint32_t extraout_var_11;
  uint32_t extraout_var_12;
  uint32_t extraout_var_13;
  uint32_t extraout_var_14;
  uint32_t extraout_var_15;
  uint32_t extraout_var_16;
  int64_t *plVar10;
  uint32_t extraout_var_17;
  uint32_t extraout_var_18;
  uint uVar11;
  id *this;
  locale *plVar12;
  void**ppuVar13;
  void *pvVar14;
  id *piVar15;
  int64_t lVar16;
  ulong uVar17;
  uint uVar18;
  id *piVar19;
  int64_t *this_ptr;
  char cVar20;
  id *piVar21;
  id *piVar22;
  id *piVar23;
  bool bVar24;
  byte local_248 [24];
  uint64_t local_208;
  id *piStack_200;
  id *local_1f8;
  uint32_t local_1e8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint32_t local_1a0;
  void**local_198;
  uint64_t local_110;
  uint32_t local_108;
  id *local_f8;
  string *local_f0;
  uint64_t local_e8;
  id *piStack_e0;
  id *local_d8;
  id *local_d0;
  uint64_t local_c8;
  id *local_c0;
  id *local_b8;
  id *local_b0;
  id *local_a8;
  id *local_a0;
  id *local_98;
  id *local_90;
  uint64_t local_88;
  id *piStack_80;
  id *local_78;
  id *local_70;
  byte local_68;
  id local_67 [7];
  id *local_60;
  id *local_58;
  id *local_50;
  id *local_48;
  id *local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*param_3 + 0x8000000000000002U < 3) {
    iVar5 = FUN_009a86b0();
    if (iVar5 == -2) {
      cVar20 = '\0';
    }
    else if (iVar5 == 0) {
      cVar20 = '\x01';
    }
    else {
      cVar20 = (iVar5 != -1) * '\x03' + '\x02';
    }
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
                                              uVar9 = (**(code **)(*this_ptr + 0x28))((int)param_1,param_2,cVar20);
      return uVar9;
    }
    goto LAB_009ffe83;
  }
  std::string::string((string *)0x8000000000000002,param_2);
  local_a8 = (id *)&g_023d03c8;
  local_a0 = (id *)&g_023d03ca;
  local_50 = (id *)&g_023d03c8;
  local_48 = (id *)&g_023d03ca;
  local_40 = local_98;
  piVar19 = local_60;
  piVar8 = local_58;
  if ((local_68 & 1) == 0) {
    piVar19 = (id *)(uint64_t)(local_68 >> 1);
    piVar8 = local_67;
  }
  piVar19 = piVar19 + (int64_t)piVar8;
  piVar8 = (id *)FUN_009cfa40();
  local_208 = (void**)local_50;
  piStack_200 = local_48;
  local_1f8 = local_40;
  if (piVar8 != piVar19) {
    local_88 = (id *)&g_023d03cb;
    piStack_80 = (id *)&g_023d03d3;
    FUN_009cfaa3(piVar8);
  }
  local_a8 = (id *)&g_023d03d4;
  local_a0 = (id *)&g_023d03d6;
  local_50 = (id *)&g_023d03d4;
  local_48 = (id *)&g_023d03d6;
  local_40 = local_98;
  piVar19 = local_60;
  piVar8 = local_58;
  if ((local_68 & 1) == 0) {
    piVar19 = (id *)(uint64_t)(local_68 >> 1);
    piVar8 = local_67;
  }
  piVar19 = piVar19 + (int64_t)piVar8;
  local_f0 = param_2;
  piVar8 = (id *)FUN_009cfa40();
  local_208 = (void**)local_50;
  piStack_200 = local_48;
  local_1f8 = local_40;
  if (piVar8 != piVar19) {
    local_88 = (id *)&g_023d03d7;
    piStack_80 = (id *)&g_023d03dc;
    FUN_009cfaa3(piVar8);
  }
  piVar15 = local_58;
  piVar8 = g_02753de8;
  local_e8 = (id *)0x0;
  piStack_e0 = (id *)0x0;
  local_d8 = (id *)0x0;
  piVar21 = (id *)(uint64_t)(local_68 >> 1);
  bVar24 = (local_68 & 1) == 0;
  local_d0 = (id *)(CONCAT71(local_d0._1_7_,local_68) & 0xffffffffffffff01);
  piVar23 = local_58;
  if (bVar24) {
    piVar23 = local_67;
  }
  local_f8 = local_60;
  piVar22 = local_60;
  if (bVar24) {
    piVar22 = piVar21;
  }
  this = piVar23;
  sVar6 = _strlen((char *)piVar23);
  pvVar14 = (void *)CONCAT44(extraout_var,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009fe13d:
    pvVar14 = (void *)0x431bde82d7b634db;
    FUN_009fffd2(0x431bde82d7b634db,6);
    if (((uint64_t)local_e8 & 1) != 0) {
      operator_delete(pvVar14);
    }
    local_d8 = local_1f8;
    piStack_e0 = piStack_200;
    local_e8 = (id *)local_208;
    piVar19 = piStack_200;
    std::ios_base::getloc();
    plVar10 = (int64_t *)std::locale::use_facet(piVar19);
    plVar12 = (locale *)*plVar10;
    (**(code **)(plVar12 + 0x18))();
    std::locale::~locale(plVar12);
    FUN_009f4e38();
    std::string::push_back((char)plVar12);
    if (((uint64_t)local_e8 & 1) == 0) {
      uVar17 = (ulong)((byte)local_e8 >> 1);
    }
    else {
      uVar17 = (ulong)piStack_e0;
    }
    std::string::append((char *)plVar12,uVar17);
    piVar19 = g_02753de8;
    sVar6 = _strlen((char *)plVar12);
    local_a0 = piVar19 + CONCAT44(extraout_var_00,sVar6);
    piVar8 = local_78;
    piVar15 = piStack_80;
    if (((uint64_t)local_88 & 1) == 0) {
      piVar8 = (id *)((int64_t)&local_88 + 1);
      piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
    }
    local_a8 = piVar19;
    local_50 = piVar19;
    local_40 = local_98;
    piVar19 = local_60;
    piVar23 = local_58;
    if ((local_68 & 1) == 0) {
      piVar19 = (id *)(uint64_t)(local_68 >> 1);
      piVar23 = local_67;
    }
    piVar19 = piVar19 + (int64_t)piVar23;
    local_48 = local_a0;
    piVar23 = (id *)FUN_009cfa40();
    local_208 = (void**)local_50;
    piStack_200 = local_48;
    local_1f8 = local_40;
    this = local_40;
    if (piVar23 != piVar19) {
      local_c0 = piVar15 + (int64_t)piVar8;
      local_c8 = piVar8;
      FUN_00a15da2(piVar23,local_c0);
      this = piVar23;
    }
    if (((uint64_t)local_88 & 1) != 0) {
      operator_delete(this);
    }
    local_f8 = local_60;
    local_d0 = (id *)(CONCAT71(local_d0._1_7_,local_68) & 0xffffffffffffff01);
    piVar21 = (id *)(uint64_t)(local_68 >> 1);
    local_b0 = local_58;
  }
  else {
    local_b0 = piVar15;
    if ((int64_t)pvVar14 <= (int64_t)piVar22) {
      local_70 = piVar23 + (int64_t)piVar22;
      local_90 = (id *)CONCAT44(local_90._4_4_,(uint)(byte)*piVar8);
      do {
        if ((piVar22 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
           (piVar8 = _memchr(this,(int)(piVar22 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
           piVar8 == (id *)0x0)) break;
        iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
        if (iVar5 == 0) {
          if ((piVar8 != local_70) && ((int64_t)piVar8 - (int64_t)piVar23 != -1))
          goto LAB_009fe13d;
          break;
        }
        piVar22 = local_70 + -(int64_t)(piVar8 + 1);
      } while ((int64_t)pvVar14 <= (int64_t)piVar22);
    }
  }
  piVar8 = local_67;
  if ((char)local_d0 != '\0') {
    piVar21 = local_f8;
    piVar8 = local_b0;
  }
  local_b0 = piVar8;
  sVar6 = _strlen((char *)this);
  pvVar14 = (void *)CONCAT44(extraout_var_01,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009fe4a0:
    FUN_009f4e38();
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      if (1 < (byte)local_208) {
LAB_009fe532:
        piVar19 = g_02753df8;
        local_88 = (id *)0x0;
        piStack_80 = (id *)0x0;
        local_78 = (id *)0x0;
        sVar6 = _strlen((char *)this);
        local_a0 = piVar19 + CONCAT44(extraout_var_03,sVar6);
        local_a8 = piVar19;
        local_50 = piVar19;
        local_40 = local_98;
        piVar19 = local_60;
        piVar8 = local_58;
        if ((local_68 & 1) == 0) {
          piVar19 = (id *)(uint64_t)(local_68 >> 1);
          piVar8 = local_67;
        }
        piVar19 = piVar19 + (int64_t)piVar8;
        local_48 = local_a0;
        piVar8 = (id *)FUN_009cfa40();
        local_208 = (void**)local_50;
        piStack_200 = local_48;
        local_1f8 = local_40;
        this = local_40;
        if (piVar8 != piVar19) {
          local_c8 = (id *)((int64_t)&local_88 + 1);
          local_c0 = local_c8;
          FUN_00a15da2();
          this = piVar8;
        }
        if (((uint64_t)local_88 & 1) != 0) {
          operator_delete(this);
        }
        goto LAB_009fe6a0;
      }
    }
    else {
      operator_delete(this);
      if (piVar8 != (id *)0x0) goto LAB_009fe532;
    }
    piVar8 = g_02753df8;
    sVar6 = _strlen((char *)this);
    local_a0 = piVar8 + CONCAT44(extraout_var_02,sVar6);
    local_a8 = piVar8;
    local_50 = piVar8;
    local_40 = local_98;
    piVar8 = local_60;
    piVar15 = local_58;
    if ((local_68 & 1) == 0) {
      piVar8 = (id *)(uint64_t)(local_68 >> 1);
      piVar15 = local_67;
    }
    piVar8 = piVar8 + (int64_t)piVar15;
    local_48 = local_a0;
    piVar15 = (id *)FUN_009cfa40();
    local_1f8 = local_40;
    piStack_200 = local_48;
    local_208 = (void**)local_50;
    this = local_50;
    if (piVar15 != piVar8) {
      FUN_00a00255();
    }
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar21) {
    local_90 = local_b0 + (int64_t)piVar21;
    do {
      if ((piVar21 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(this,(int)(piVar21 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_b0 != -1))
        goto LAB_009fe4a0;
        break;
      }
      piVar21 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar21);
  }
LAB_009fe6a0:
  if ((local_68 & 1) == 0) {
    piVar8 = (id *)(uint64_t)(local_68 >> 1);
    local_70 = local_67;
  }
  else {
    local_70 = local_58;
    piVar8 = local_60;
  }
  sVar6 = _strlen((char *)this);
  pvVar14 = (void *)CONCAT44(extraout_var_04,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009fe767:
    FUN_009f4e38();
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      if (1 < (byte)local_208) {
LAB_009fe8b4:
        FUN_009f4e38();
        piVar19 = g_02753e00;
        sVar6 = _strlen((char *)this);
        local_a0 = piVar19 + CONCAT44(extraout_var_05,sVar6);
        piVar8 = local_78;
        piVar15 = piStack_80;
        if (((uint64_t)local_88 & 1) == 0) {
          piVar8 = (id *)((int64_t)&local_88 + 1);
          piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
        }
        local_a8 = piVar19;
        local_50 = piVar19;
        local_40 = local_98;
        piVar19 = local_60;
        piVar23 = local_58;
        if ((local_68 & 1) == 0) {
          piVar19 = (id *)(uint64_t)(local_68 >> 1);
          piVar23 = local_67;
        }
        piVar19 = piVar19 + (int64_t)piVar23;
        local_48 = local_a0;
        piVar23 = (id *)FUN_009cfa40();
        local_208 = (void**)local_50;
        piStack_200 = local_48;
        local_1f8 = local_40;
        this = local_40;
        if (piVar23 != piVar19) {
          local_c0 = piVar15 + (int64_t)piVar8;
          local_c8 = piVar8;
          FUN_00a15da2(piVar23,local_c0);
          this = piVar23;
        }
        if (((uint64_t)local_88 & 1) != 0) {
          operator_delete(this);
        }
        goto LAB_009feaea;
      }
    }
    else {
      operator_delete(this);
      if (piVar8 != (id *)0x0) goto LAB_009fe8b4;
    }
    ppuVar13 = &PTR__ostream_02517318;
    local_208 = &PTR__ostream_02517318;
    local_198 = &PTR__ostream_02517340;
    std::ios_base::init(&PTR__ostream_02517318);
    local_110 = 0;
    local_108 = 0xffffffff;
    local_208 = (void**)&g_025172a8;
    local_198 = (void**)&g_025172d0;
    uVar7 = std::streambuf::streambuf((streambuf *)ppuVar13);
    piStack_200 = (id *)&g_02523790;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0x10;
    local_a8 = (id *)CONCAT71(local_a8._1_7_,0x20);
    FUN_009ad920(uVar7,1);
    _strlen((char *)ppuVar13);
    FUN_009ad920();
    FUN_00892260();
    piStack_80 = local_c0;
    local_88 = local_b8;
    if (((uint64_t)local_c8 & 1) == 0) {
      piStack_80 = (id *)((uint64_t)local_c8 >> 1 & 0x7f);
      local_88 = (id *)((int64_t)&local_c8 + 1);
    }
    piStack_80 = piStack_80 + (int64_t)local_88;
    local_40 = local_78;
    piVar8 = local_60;
    piVar15 = local_58;
    if ((local_68 & 1) == 0) {
      piVar8 = (id *)(uint64_t)(local_68 >> 1);
      piVar15 = local_67;
    }
    piVar8 = piVar8 + (int64_t)piVar15;
    local_50 = local_88;
    local_48 = piStack_80;
    piVar15 = (id *)FUN_00a0043a();
    local_98 = local_40;
    local_a0 = local_48;
    local_a8 = local_50;
    this = local_50;
    if (piVar15 != piVar8) {
      FUN_00a0049d();
    }
    if (((uint64_t)local_c8 & 1) != 0) {
      operator_delete(this);
    }
    local_208 = (void**)&g_025172a8;
    local_198 = (void**)&g_025172d0;
    piStack_200 = (id *)&g_02523790;
    if ((local_1c0 & 1) != 0) {
      operator_delete(this);
    }
    std::streambuf::~streambuf((streambuf *)this);
    std::ostream::~ostream((ostream *)this);
    std::ios::~ios((ios *)this);
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar8) {
    local_90 = local_70 + (int64_t)piVar8;
    do {
      if ((piVar8 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(this,(int)(piVar8 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_70 != -1))
        goto LAB_009fe767;
        break;
      }
      piVar8 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar8);
  }
LAB_009feaea:
  if ((local_68 & 1) == 0) {
    piVar8 = (id *)(uint64_t)(local_68 >> 1);
    local_70 = local_67;
  }
  else {
    local_70 = local_58;
    piVar8 = local_60;
  }
  sVar6 = _strlen((char *)this);
  pvVar14 = (void *)CONCAT44(extraout_var_06,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009febb1:
    FUN_009f4e38();
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      if (1 < (byte)local_208) {
LAB_009fecfe:
        FUN_009f4e38();
        piVar19 = g_02753e08;
        sVar6 = _strlen((char *)this);
        local_a0 = piVar19 + CONCAT44(extraout_var_07,sVar6);
        piVar8 = local_78;
        piVar15 = piStack_80;
        if (((uint64_t)local_88 & 1) == 0) {
          piVar8 = (id *)((int64_t)&local_88 + 1);
          piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
        }
        local_a8 = piVar19;
        local_50 = piVar19;
        local_40 = local_98;
        piVar19 = local_60;
        piVar23 = local_58;
        if ((local_68 & 1) == 0) {
          piVar19 = (id *)(uint64_t)(local_68 >> 1);
          piVar23 = local_67;
        }
        piVar19 = piVar19 + (int64_t)piVar23;
        local_48 = local_a0;
        piVar23 = (id *)FUN_009cfa40();
        local_208 = (void**)local_50;
        piStack_200 = local_48;
        local_1f8 = local_40;
        this = local_40;
        if (piVar23 != piVar19) {
          local_c0 = piVar15 + (int64_t)piVar8;
          local_c8 = piVar8;
          FUN_00a15da2(piVar23,local_c0);
          this = piVar23;
        }
        if (((uint64_t)local_88 & 1) != 0) {
          operator_delete(this);
        }
        goto LAB_009fef34;
      }
    }
    else {
      operator_delete(this);
      if (piVar8 != (id *)0x0) goto LAB_009fecfe;
    }
    ppuVar13 = &PTR__ostream_02517318;
    local_208 = &PTR__ostream_02517318;
    local_198 = &PTR__ostream_02517340;
    std::ios_base::init(&PTR__ostream_02517318);
    local_110 = 0;
    local_108 = 0xffffffff;
    local_208 = (void**)&g_025172a8;
    local_198 = (void**)&g_025172d0;
    uVar7 = std::streambuf::streambuf((streambuf *)ppuVar13);
    piStack_200 = (id *)&g_02523790;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0x10;
    local_a8 = (id *)CONCAT71(local_a8._1_7_,0x20);
    FUN_009ad920(uVar7,1);
    _strlen((char *)ppuVar13);
    FUN_009ad920();
    FUN_00892260();
    piStack_80 = local_c0;
    if (((uint64_t)local_c8 & 1) == 0) {
      local_b8 = (id *)((int64_t)&local_c8 + 1);
      piStack_80 = (id *)((uint64_t)local_c8 >> 1 & 0x7f);
    }
    piStack_80 = piStack_80 + (int64_t)local_b8;
    local_40 = local_78;
    piVar8 = local_60;
    piVar15 = local_58;
    if ((local_68 & 1) == 0) {
      piVar8 = (id *)(uint64_t)(local_68 >> 1);
      piVar15 = local_67;
    }
    piVar8 = piVar8 + (int64_t)piVar15;
    local_88 = local_b8;
    local_50 = local_b8;
    local_48 = piStack_80;
    piVar15 = (id *)FUN_00a0043a();
    local_98 = local_40;
    local_a0 = local_48;
    local_a8 = local_50;
    this = local_50;
    if (piVar15 != piVar8) {
      FUN_00a0049d();
    }
    if (((uint64_t)local_c8 & 1) != 0) {
      operator_delete(this);
    }
    local_208 = (void**)&g_025172a8;
    local_198 = (void**)&g_025172d0;
    piStack_200 = (id *)&g_02523790;
    if ((local_1c0 & 1) != 0) {
      operator_delete(this);
    }
    std::streambuf::~streambuf((streambuf *)this);
    std::ostream::~ostream((ostream *)this);
    std::ios::~ios((ios *)this);
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar8) {
    local_90 = local_70 + (int64_t)piVar8;
    do {
      if ((piVar8 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(this,(int)(piVar8 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_70 != -1))
        goto LAB_009febb1;
        break;
      }
      piVar8 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar8);
  }
LAB_009fef34:
  if ((local_68 & 1) == 0) {
    piVar8 = (id *)(uint64_t)(local_68 >> 1);
    local_70 = local_67;
  }
  else {
    local_70 = local_58;
    piVar8 = local_60;
  }
  sVar6 = _strlen((char *)this);
  pvVar14 = (void *)CONCAT44(extraout_var_08,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009feffb:
    FUN_009f4e38();
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      if (1 < (byte)local_208) {
LAB_009ff08d:
        FUN_009f4e38();
        piVar19 = g_02753e10;
        sVar6 = _strlen((char *)this);
        local_a0 = piVar19 + CONCAT44(extraout_var_10,sVar6);
        piVar8 = local_78;
        piVar15 = piStack_80;
        if (((uint64_t)local_88 & 1) == 0) {
          piVar8 = (id *)((int64_t)&local_88 + 1);
          piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
        }
        local_a8 = piVar19;
        local_50 = piVar19;
        local_40 = local_98;
        piVar19 = local_60;
        piVar23 = local_58;
        if ((local_68 & 1) == 0) {
          piVar19 = (id *)(uint64_t)(local_68 >> 1);
          piVar23 = local_67;
        }
        piVar19 = piVar19 + (int64_t)piVar23;
        local_48 = local_a0;
        piVar23 = (id *)FUN_009cfa40();
        local_208 = (void**)local_50;
        piStack_200 = local_48;
        local_1f8 = local_40;
        this = local_40;
        if (piVar23 != piVar19) {
          local_c0 = piVar15 + (int64_t)piVar8;
          local_c8 = piVar8;
          FUN_00a15da2(piVar23,local_c0);
          this = piVar23;
        }
        if (((uint64_t)local_88 & 1) != 0) {
          operator_delete(this);
        }
        goto LAB_009ff219;
      }
    }
    else {
      operator_delete(this);
      if (piVar8 != (id *)0x0) goto LAB_009ff08d;
    }
    piVar8 = g_02753e10;
    sVar6 = _strlen((char *)this);
    local_a0 = piVar8 + CONCAT44(extraout_var_09,sVar6);
    local_a8 = piVar8;
    local_50 = piVar8;
    local_40 = local_98;
    piVar8 = local_60;
    piVar15 = local_58;
    if ((local_68 & 1) == 0) {
      piVar8 = (id *)(uint64_t)(local_68 >> 1);
      piVar15 = local_67;
    }
    piVar8 = piVar8 + (int64_t)piVar15;
    local_48 = local_a0;
    piVar15 = (id *)FUN_009cfa40();
    local_1f8 = local_40;
    piStack_200 = local_48;
    local_208 = (void**)local_50;
    this = local_50;
    if (piVar15 != piVar8) {
      FUN_00a00255();
    }
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar8) {
    local_90 = local_70 + (int64_t)piVar8;
    do {
      if ((piVar8 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(this,(int)(piVar8 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_70 != -1))
        goto LAB_009feffb;
        break;
      }
      piVar8 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar8);
  }
LAB_009ff219:
  if ((local_68 & 1) == 0) {
    piVar8 = (id *)(uint64_t)(local_68 >> 1);
    local_70 = local_67;
  }
  else {
    local_70 = local_58;
    piVar8 = local_60;
  }
  sVar6 = _strlen((char *)this);
  pvVar14 = (void *)CONCAT44(extraout_var_11,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009ff2e0:
    FUN_009f4e38();
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      if (1 < (byte)local_208) {
LAB_009ff372:
        FUN_009f4e38();
        piVar19 = g_02753e18;
        sVar6 = _strlen((char *)this);
        local_a0 = piVar19 + CONCAT44(extraout_var_13,sVar6);
        piVar8 = local_78;
        piVar15 = piStack_80;
        if (((uint64_t)local_88 & 1) == 0) {
          piVar8 = (id *)((int64_t)&local_88 + 1);
          piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
        }
        local_a8 = piVar19;
        local_50 = piVar19;
        local_40 = local_98;
        piVar19 = local_60;
        piVar23 = local_58;
        if ((local_68 & 1) == 0) {
          piVar19 = (id *)(uint64_t)(local_68 >> 1);
          piVar23 = local_67;
        }
        piVar19 = piVar19 + (int64_t)piVar23;
        local_48 = local_a0;
        piVar23 = (id *)FUN_009cfa40();
        local_208 = (void**)local_50;
        piStack_200 = local_48;
        local_1f8 = local_40;
        this = local_40;
        if (piVar23 != piVar19) {
          local_c0 = piVar15 + (int64_t)piVar8;
          local_c8 = piVar8;
          FUN_00a15da2(piVar23,local_c0);
          this = piVar23;
        }
        if (((uint64_t)local_88 & 1) != 0) {
          operator_delete(this);
        }
        goto LAB_009ff4fe;
      }
    }
    else {
      operator_delete(this);
      if (piVar8 != (id *)0x0) goto LAB_009ff372;
    }
    piVar8 = g_02753e18;
    sVar6 = _strlen((char *)this);
    local_a0 = piVar8 + CONCAT44(extraout_var_12,sVar6);
    local_a8 = piVar8;
    local_50 = piVar8;
    local_40 = local_98;
    piVar8 = local_60;
    piVar15 = local_58;
    if ((local_68 & 1) == 0) {
      piVar8 = (id *)(uint64_t)(local_68 >> 1);
      piVar15 = local_67;
    }
    piVar8 = piVar8 + (int64_t)piVar15;
    local_48 = local_a0;
    piVar15 = (id *)FUN_009cfa40();
    local_1f8 = local_40;
    piStack_200 = local_48;
    local_208 = (void**)local_50;
    this = local_50;
    if (piVar15 != piVar8) {
      FUN_00a00255();
    }
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar8) {
    local_90 = local_70 + (int64_t)piVar8;
    do {
      if ((piVar8 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(this,(int)(piVar8 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(this,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_70 != -1))
        goto LAB_009ff2e0;
        break;
      }
      piVar8 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar8);
  }
LAB_009ff4fe:
  piVar23 = (id *)(uint64_t)(local_68 >> 1);
  piVar8 = (id *)CONCAT71((int7)((uint64_t)this >> 8),1);
  bVar4 = local_68 & 1;
  local_b0 = (id *)(uint64_t)bVar4;
  local_70 = local_58;
  piVar15 = local_58;
  if (bVar4 == 0) {
    piVar15 = local_67;
  }
  local_d0 = local_60;
  piVar21 = local_60;
  if (bVar4 == 0) {
    piVar21 = piVar23;
  }
  local_90 = g_02753e20;
  sVar6 = _strlen((char *)piVar8);
  pvVar14 = (void *)CONCAT44(extraout_var_14,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009ff5f5:
    piVar15 = (id *)(uint64_t)((byte)local_e8 >> 1);
    piVar19 = piStack_e0;
    if (((uint64_t)local_e8 & 1) == 0) {
      piVar19 = piVar15;
    }
    piVar21 = local_70;
    bVar4 = (byte)local_e8;
    if (piVar19 == (id *)0x0) {
      pvVar14 = (void *)0x431bde82d7b634db;
      FUN_009fffd2(0x431bde82d7b634db,6);
      if (((uint64_t)local_e8 & 1) != 0) {
        operator_delete(pvVar14);
      }
      local_d8 = local_1f8;
      piStack_e0 = piStack_200;
      local_e8 = (id *)local_208;
      local_90 = g_02753e20;
      local_d0 = local_60;
      bVar4 = (byte)local_208;
      piVar15 = (id *)(((uint64_t)local_208 & 0xff) >> 1);
      local_b0 = (id *)(CONCAT71((int7)((uint64_t)local_60 >> 8),local_68) & 0xffffffffffffff01);
      piVar23 = (id *)(uint64_t)(local_68 >> 1);
      piVar8 = g_02753e20;
      piVar21 = local_58;
    }
    piVar19 = local_90;
    local_70 = piStack_e0;
    sVar6 = _strlen((char *)piVar8);
    local_a0 = piVar19 + CONCAT44(extraout_var_15,sVar6);
    piVar8 = local_d8;
    piVar22 = local_70;
    if ((bVar4 & 1) == 0) {
      piVar8 = (id *)((int64_t)&local_e8 + 1);
      piVar22 = piVar15;
    }
    local_a8 = local_90;
    local_50 = local_90;
    if ((char)local_b0 == '\0') {
      piVar21 = local_67;
    }
    local_40 = local_98;
    piVar19 = local_d0;
    if ((char)local_b0 == '\0') {
      piVar19 = piVar23;
    }
    piVar19 = piVar19 + (int64_t)piVar21;
    local_48 = local_a0;
    piVar15 = (id *)FUN_009cfa40();
    local_208 = (void**)local_50;
    piStack_200 = local_48;
    local_1f8 = local_40;
    if (piVar15 != piVar19) {
      piStack_80 = piVar22 + (int64_t)piVar8;
      local_88 = piVar8;
      FUN_00a15da2(piVar15,piStack_80);
    }
    bVar4 = local_68 & 1;
    piVar23 = (id *)(uint64_t)(local_68 >> 1);
    local_70 = local_58;
    piVar8 = local_60;
  }
  else {
    if ((int64_t)pvVar14 <= (int64_t)piVar21) {
      local_f8 = piVar15 + (int64_t)piVar21;
      do {
        if ((piVar21 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
           (piVar21 = _memchr(piVar8,(int)(piVar21 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
           piVar21 == (id *)0x0)) break;
        iVar5 = _memcmp(piVar8,pvVar14,(size_t)piVar19);
        if (iVar5 == 0) {
          if ((piVar21 != local_f8) && ((int64_t)piVar21 - (int64_t)piVar15 != -1))
          goto LAB_009ff5f5;
          break;
        }
        piVar21 = local_f8 + -(int64_t)(piVar21 + 1);
      } while ((int64_t)pvVar14 <= (int64_t)piVar21);
    }
    bVar4 = (byte)local_b0;
    piVar8 = local_d0;
  }
  piVar15 = local_67;
  if (bVar4 != 0) {
    piVar23 = piVar8;
    piVar15 = local_70;
  }
  local_70 = piVar15;
  sVar6 = _strlen((char *)piVar15);
  pvVar14 = (void *)CONCAT44(extraout_var_16,sVar6);
  if (pvVar14 == (void *)0x0) {
LAB_009ff910:
    lVar1 = *param_3;
    if ((lVar1 == -0x8000000000000000) ||
       (((lVar1 == 0x7fffffffffffffff || (lVar1 == 0x7ffffffffffffffe)) ||
        (piVar15 = (id *)0x431bde82d7b634db, (lVar1 % 86400000000) % 1000000 != 0)))) {
      FUN_009fffd2();
    }
    else {
      local_208 = (void**)0x0;
      piStack_200 = (id *)0x0;
      local_1f8 = (id *)0x0;
    }
    if (((uint64_t)local_e8 & 1) != 0) {
      operator_delete(piVar15);
    }
    piVar19 = g_02753e28;
    local_d8 = local_1f8;
    local_e8 = (id *)local_208;
    piStack_e0 = piStack_200;
    piVar15 = (id *)CONCAT71((int7)((uint64_t)piVar15 >> 8),1);
    piVar8 = piStack_200;
    if (((uint64_t)local_208 & 1) == 0) {
      piVar8 = (id *)((uint64_t)local_208 >> 1 & 0x7f);
    }
    if (piVar8 == (id *)0x0) {
      sVar6 = _strlen((char *)piVar15);
      local_a0 = piVar19 + CONCAT44(extraout_var_17,sVar6);
      local_a8 = piVar19;
      local_50 = piVar19;
      local_40 = local_98;
      if ((local_68 & 1) == 0) {
        local_60 = (id *)(uint64_t)(local_68 >> 1);
        local_58 = local_67;
      }
      piVar8 = local_60 + (int64_t)local_58;
      local_48 = local_a0;
      piVar19 = (id *)FUN_009cfa40();
      local_1f8 = local_40;
      piStack_200 = local_48;
      local_208 = (void**)local_50;
      if (piVar19 != piVar8) {
        FUN_00a00255();
      }
    }
    else {
      std::ios_base::getloc();
      plVar10 = (int64_t *)std::locale::use_facet(piVar15);
      plVar12 = (locale *)*plVar10;
      (**(code **)(plVar12 + 0x18))();
      std::locale::~locale(plVar12);
      local_88 = (id *)0x0;
      piStack_80 = (id *)0x0;
      local_78 = (id *)0x0;
      std::string::push_back((char)plVar12);
      if (((uint64_t)local_e8 & 1) == 0) {
        uVar17 = (ulong)((byte)local_e8 >> 1);
      }
      else {
        uVar17 = (ulong)piStack_e0;
      }
      std::string::append((char *)plVar12,uVar17);
      piVar19 = g_02753e28;
      sVar6 = _strlen((char *)plVar12);
      local_a0 = piVar19 + CONCAT44(extraout_var_18,sVar6);
      piVar8 = local_78;
      piVar15 = piStack_80;
      if (((uint64_t)local_88 & 1) == 0) {
        piVar8 = (id *)((int64_t)&local_88 + 1);
        piVar15 = (id *)((uint64_t)local_88 >> 1 & 0x7f);
      }
      local_a8 = piVar19;
      local_50 = piVar19;
      local_40 = local_98;
      if ((local_68 & 1) == 0) {
        local_60 = (id *)(uint64_t)(local_68 >> 1);
        local_58 = local_67;
      }
      piVar21 = local_60 + (int64_t)local_58;
      local_48 = local_a0;
      piVar23 = (id *)FUN_009cfa40();
      local_208 = (void**)local_50;
      piStack_200 = local_48;
      local_1f8 = local_40;
      piVar19 = local_40;
      if (piVar23 != piVar21) {
        local_c0 = piVar15 + (int64_t)piVar8;
        local_c8 = piVar8;
        FUN_00a15da2(piVar23,local_c0);
        piVar19 = piVar23;
      }
      if (((uint64_t)local_88 & 1) != 0) {
        operator_delete(piVar19);
      }
    }
  }
  else if ((int64_t)pvVar14 <= (int64_t)piVar23) {
    local_90 = local_70 + (int64_t)piVar23;
    do {
      if ((piVar23 + (1 - (int64_t)pvVar14) == (id *)0x0) ||
         (piVar8 = _memchr(piVar15,(int)(piVar23 + (1 - (int64_t)pvVar14)),(size_t)piVar19),
         piVar8 == (id *)0x0)) break;
      iVar5 = _memcmp(piVar15,pvVar14,(size_t)piVar19);
      if (iVar5 == 0) {
        if ((piVar8 != local_90) && ((int64_t)piVar8 - (int64_t)local_70 != -1))
        goto LAB_009ff910;
        break;
      }
      piVar23 = local_90 + -(int64_t)(piVar8 + 1);
    } while ((int64_t)pvVar14 <= (int64_t)piVar23);
  }
  uVar7 = FUN_009a86b0();
  local_a8 = (id *)CONCAT44(local_a8._4_4_,uVar7);
  FUN_00a00682();
  lVar1 = *param_3;
  lVar16 = lVar1 % 86400000000;
  if (lVar1 + 0x8000000000000002U < 3) {
    lVar16 = lVar1;
  }
  piStack_200 = (id *)CONCAT44(piStack_200._4_4_,
                               (int)(SUB168(SEXT816(lVar16) * ZEXT816(0x98b5bf2c03e529c5),8) >> 0x1f
                                    ) - (SUB164(SEXT816(lVar16) * ZEXT816(0x98b5bf2c03e529c5),0xc)
                                        >> 0x1f));
  auVar2 = SEXT816(lVar16 / 60000000) * ZEXT816(0x8888888888888889);
  auVar3 = SEXT816(lVar16 / 1000000) * ZEXT816(0x8888888888888889);
  uVar18 = (int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f);
  uVar11 = (int)(lVar16 / 1000000) + uVar18 * -0x3c;
  local_208 = (void**)
              CONCAT44((int)(lVar16 / 60000000) +
                       ((int)(auVar2._8_8_ >> 5) - (auVar2._12_4_ >> 0x1f)) * -0x3c,uVar11);
  local_1e8 = 0xffffffff;
  std::string::string((string *)(uint64_t)uVar11,(string *)(uint64_t)uVar18);
  pvVar14 = (void *)(uint64_t)(uint)(int)param_1;
  uVar9 = (**(code **)(*this_ptr + 0x30))(pvVar14,local_f0,&local_208,local_248);
  if ((local_248[0] & 1) != 0) {
    operator_delete(pvVar14);
  }
  if (((uint64_t)local_e8 & 1) != 0) {
    operator_delete(pvVar14);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(pvVar14);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar9;
  }
LAB_009ffe83:
                      ___stack_chk_fail();
}

